#include<math.h>
#include<stdio.h>
int main(){
    int low, high, number, originalNumber, rem, count = 0;
    double result =0.0;
    printf("enter two numbers(intervals):");
    scanf("%d%d",&low,&high);
    printf("armstrong numbers between %d and %d are:",low,high);
    //swap numbers if high <low
    if (high <low){
        high += low;
        low = high - low;
        high -= low;
    }
    // iterate number from (low + 1) to (high - 1)
    // in each iteration,check if number is armstrong
    for(number = low + 1; number <high; ++number){
        originalNumber = number;
        // numbers of digits calculation
        while (originalNumber != 0){
            originalNumber /= 10;
            ++count;
        }
        originalNumber = number;
        // result contains sum of nth power of each individual digit
        while (originalNumber != 0){
            rem = originalNumber % 10;
            result += pow(rem,count);
            originalNumber /= 10;
        }
        // check if number is equal to tha sum of nth power of individual digits
        if ((int)result == number){
            printf("%d ",number);
        }
        // resetting the values
        count = 0;
        result = 0;

    } 
    return 0;


}
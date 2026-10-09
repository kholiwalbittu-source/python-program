#include<stdio.h>
int main()
{
    double first, second, temp;
    printf("\n\n enter first number:");
    scanf("%lf",&first);
    printf("enter second number:");
    scanf("%lf",&second);

    // values of first is assigned to temp
    temp = first;

    // values of second is assigned to first
    first = second;

    //values of temp (initial value of first)
    //is assigned to second 
    second = temp;

    // %d.2lf displays number up to 2 decimal points
    printf("/n after swapping");
    printf("/n first number = %.2lf/n",first);
    printf("/n second number = %.2lf",second);
    return 0;
}
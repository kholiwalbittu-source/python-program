#include<stdio.h>

int main ()
{
    // int length = 5; // 
    // int breadth = 6;
    int length, breadth;

    printf("enter length: ");
    scanf("%d", &length);

    printf("enter breadth: ");
    scanf("%d", &breadth);

    printf("the area of this rectangle is %d", length * breadth);
    return 0;

}
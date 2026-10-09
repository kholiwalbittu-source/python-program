#include<stdio.h>

int main() {
    float base,height,area;
    printf("enter base of triangle:");
    scanf("%f",&base);
    printf("enter of height of triangle:");
    scanf("%f",height);
    area = 0.5 * base * height;
    printf("area of right angled triangle = %.2f",area);
    return 0;
}
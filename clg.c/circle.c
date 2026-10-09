#include<stdio.h>

int main() {
    float radius,area;
    printf("enterr radius of circle:");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("area of circle = %.2f\n",area);
    return 0;
}
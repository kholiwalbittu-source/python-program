#include<stdio.h>
void display(int a[2][3]) {
    int i, j;

for (i = 0; i < 2; i++){
    for (j = 0; j < 3; j++) {
printf("%d", a[i][j]);
    }
    printf("\n");
}
}

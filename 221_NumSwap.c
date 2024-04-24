#include <stdio.h>

/*
#pointer
#function
*/

void swap(int *x, int *y); // 接收地址時要聲明「指標型別」的引數

int main() {

    int num1, num2;

    printf("num1 = ");
    scanf("%d", &num1);
    printf("num2 = ");
    scanf("%d", &num2);

    swap(&num1, &num2);

    printf("[%d,%d]\n", num1, num2);

    return 0;
}

void swap(int *x, int *y) {

    printf("\nSwap!\n\n");

    *x = *x + *y;
    *y = *x - *y; // = (x+y)-y = x
    *x = *x - *y; // = (x+y)-x = y

}
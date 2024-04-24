#include <stdio.h>

/*
#function
#pointer
*/

void sort(int *x, int *y);

int main() {

    int num1, num2;

    printf("num1 = ");
    scanf("%d", &num1);
    printf("num2 = ");
    scanf("%d", &num2);

    sort(&num1, &num2);

    printf("[%d,%d]\n", num1, num2);

    return 0;
}

void sort(int *x, int *y) {

    int max = *x;

    if (*y > max) {

        *x = *x + *y;
        *y = *x - *y;
        *x = *x - *y;

    }

}
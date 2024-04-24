#include <stdio.h>

/*
#triangle
#if
#scanf

一定要記得，scanf後面指定位址，而不是變數
*/

int main() {
    int side1, side2, side3;
    printf("Please enter three sides of triangle:");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("It is a isosceles triangle.");
    }

    if (!(side1 == side2 || side2 == side3 || side1 == side3)) {
        printf("It is NOT a isosceles triangle.");
    }

    printf("\n");
    return 0;
}

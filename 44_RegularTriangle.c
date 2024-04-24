#include <stdio.h>

/*
#if
#triangle
#buggy

if陳述句中的表達式必須要有
一對括弧括住整條表達式。
*/


int main() {
    int side1, side2, side3;
    printf("Please enter three sides of triangle:");
    scanf("%d %d %d", &side1, &side2, &side3);

    if ((side1 == side2) && (side2 == side3)) {
        printf("It is a regular triangle.\n");
    }
    if (!(side1 == side2) && (side2 == side3)) {
        printf("It is NOT a regular triangle.\n");
    }

    return 0;
}
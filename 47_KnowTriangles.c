#include <stdio.h>

/*

注意條件囊括的範圍，有先後關係。
*/

int main() {
    int side1, side2, side3, cache;

    printf("side1,side2,side3 = ");
    scanf("%d,%d,%d", &side1, &side2, &side3);

    if (side1 > side2) {
        cache = side1;
        side1 = side2;
        side2 = cache;
    }
    if (side1 > side3) {
        cache = side1;
        side1 = side3;
        side3 = cache;
    }
    if (side2 > side3) {
        cache = side2;
        side2 = side3;
        side3 = cache;
    }
    
    if (side1 == side3) {
        printf("It is a Regular triangle.");
    }printf("\n");

    if (side1 == side2 || side2 == side3) {
        printf("It is a Isosceles triangle.");
    }printf("\n");
    
    if (side1 * side1 + side2 * side2 == side3 * side3) {
        printf("It is a Rectangular triangle.");
    }printf("\n");

    return 0;
}
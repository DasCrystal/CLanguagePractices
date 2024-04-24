#include <stdio.h>

/*
#if

if else...
*/

int main() {
    int num;
    printf("int num = ");
    scanf("%d", &num);
    if (num > 4) {
        printf("num is larger than 4.");
    }
    if (num < 4) {
        printf("num is smaller than 4.");
    }
    if (num == 4) {
        printf("num is 4.");
    }
    printf("\n");
    return 0;
}
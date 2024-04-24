#include <stdio.h>

/*
#if
#double
*/

int main() {
    double num = 2, guess = 0;
    printf("int num = ");
    scanf("%lf", &guess);
    if (guess > num) {
        printf("Too big.");
    }
    if (guess < num) {
        printf("Too small.");
    }
    if (guess == num) {
        printf("That's it.");
    }
    printf("\n");
    return 0;
}
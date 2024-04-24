#include <stdio.h>
#include <stdlib.h>

/*
#game
#stdlib
#guess
#rand
#seed
#loop
#while
#work
#style

與條件有關的程式碼要與那個條件黏在一起，
無關則要分開。
*/

int main() {
    int num, guess, seed, loop=0;

    printf("int seed = ");
    scanf("%d", &seed);
    srand(seed);

    num = rand();
    printf("max = %d\n\n", RAND_MAX);

    while (1==1) {

        loop += 1;
        printf("guess = ");
        scanf("%d", &guess);

        if (guess > num) {
            printf("Too large.");

        } else if (guess < num)  {
            printf("Too small.");

        } else if (guess == num) {
            // Result 1
            printf("That's it, guessed %d times.", loop);
            break;
        }

        if (loop >= 100) {
            // Result 2
            printf("Over 100 times, answer is %d. See you next time.", num);
            break;
        }

        printf("\n\n");
    }
    
    printf("\n");
    return 0;
}
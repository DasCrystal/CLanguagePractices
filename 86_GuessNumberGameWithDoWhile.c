#include <stdio.h>
#include <stdlib.h>

/*
#dowhile
#loop
#guess

while 與 do-while 的區別
  do-while
    在區塊的「尾部」判斷是否要繼續執行程式區塊，
    條件式寫在「尾部」，
    尾部「要加」分號。
  while
    在區塊的「頭部」判斷是否要繼續執行程式區塊，
    條件式寫在「頭部」，
    尾部「不加」分號。
*/


int main() {

    int seed, guess, num, loop=0;

    printf("seed = ");
    scanf("%d", &seed);
    srand(seed); num = rand();

    do {
    printf("guess = ");
    scanf("%d", &guess);
    loop += 1;
    
    if (guess > num) {
        printf("Too large.\n");
    } else if (guess < num) {
        printf("Too small.\n");
    }

    printf("\n");

    } while (guess != num);

    printf("That's it. You guessed %d time(s).\n", loop);
    return 0;
}
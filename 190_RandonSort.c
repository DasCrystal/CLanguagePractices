#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
#for
#loop
#rand
#stdlib.h
#time.h

註記：這種隨機數產生方式比較不安全，
      因為隨機數是事先決定好的，
      有在正常揭露前被洩露的風險。
*/

int main() {

    int numArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        cache, targetEle;

    srand(time(0));

    for (int x = 0; x < 10; x += 1) {

        targetEle = rand() % 10 + 1;

        cache = numArr[x];
        numArr[x] = numArr[targetEle];
        numArr[targetEle] = cache;
    }

    for (int x = 0; x < 10; x += 1) { // 印出結果

        printf("%d ", numArr[x]);
    }

    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
#for
#loop
#rand
#stdlib.h
#time.h

比起190似乎有更安全一點...吧。
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

        printf("%d ", numArr[x]);

    }

    printf("\n");

    main();

    return 0;
}
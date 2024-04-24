#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void randlize(int target[]);

int main() {

    int numArray[10] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // 以numArray[0]表示長度

    randlize(numArray);

    for (int x = 1; x < sizeof(numArray)/sizeof(numArray[0]); x += 1) { // 印出除[0]之外的數列

        printf("%d ", numArray[x]);

    }

    printf("\n");

    return 0;
}

void randlize(int target[]) {

    srand(time(0));

    for (int x = 1; x < target[0]; x += 1) {

        target[x] = rand() % 100;

    }

}
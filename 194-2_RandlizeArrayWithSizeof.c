#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
#for
#loop
#stdlib.h
#time.h

sizeof
    sizeof()可以用於得出括弧內的值的大小，
    如sizeof(int)即等於int的大小，
    在printf()中要用%zu作為標示符，


*/

void randlize(int target[]);

int main() {

    int numArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    randlize(numArray);

    for (int x = 0; x < sizeof(numArray)/sizeof(int); x += 1) { // 印出結果

        printf("%d ", numArray[x]);

    }

    printf("\n");

    return 0;
}

void randlize(int target[]) {

    srand(time(0));

    printf("%d\n", sizeof(*target)/sizeof(target[0]));

    for (int x = 0; x < sizeof(*target)/sizeof(target[0]); x += 1) {

        target[x] = rand() % 100;

    }

}
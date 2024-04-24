#include <stdio.h>

/*
#pointer
#function
#for
#loop

指標偏移量，用下標表示[]。
應該也只有陣列會用到偏移量啦。
*/

int max(int *target, int length); 

int main() {

    int arra[10] = {1,2,3,4,5,6,7,8,9,0};

    printf("Max is %d.\n", max(arra, 10));

    return 0;
}

int max(int *target, int length) {

    int max = 0;

    for (int x = 0; x < length; x += 1) {

        if (target[x] > max) {

            max = target[x];

        }

    }

    return max;
}
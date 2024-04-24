#include <stdio.h>

/*
#while
#loop


*/


int main() {

    int loop=0;

    while (loop < 10) {
        loop += 1; // 先加一
        printf("%d\n", loop); // 輸出這是第幾次迴圈
    }

    return 0;
}
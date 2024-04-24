#include <stdio.h>

/*
#for
#scope

多層迴圈中的作用域
  注意for迴圈中變數的關係，
  不要重名。
*/

int main() {

    int sta[10] = {0}, // statistic // 歸零
        order;

    for (int x = 0; x <= 9; x += 1) {

        printf("order = ");
        scanf("%d", &order);

        sta[(order-1)/10] += 1;

    }

    for (int y = 0; y <= 9; y += 1) {

        printf("%d%%:", (y+1)*10);
        for (int x = 1; x <= sta[y]; x += 1) { // 第一次迴圈畫的是第一個符號

            printf(">");

        }

        printf("\n");

    }

    return 0;
}
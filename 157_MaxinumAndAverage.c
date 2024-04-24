#include <stdio.h>

/*
#loop
#array
#max
#average
#improve

均勻
  在設計程式時，可以將一些用時極短的運算工作分配在輸入的間隔中，
  而不是在所有值都輸入完後才一次執行所有工作，這麼做可以讓使用者比較
  感覺不到運算工作所消耗的時間，簡單來說就是把一個大工作切成很多小工作。
*/

int main() {

    int arr[1024] = {0}, // 歸零,最多1024個元素
        total = 0, loop = 0;

    for (int x = 0; x < 1024; x += 1) {

        printf("arr[%d] = ", x);
        scanf("%d", &arr[x]);

        if (arr[x] == 0) {

            break;
        }

        total += arr[x];    // 求總和

        loop += 1; // 計算輸入的總數
    }

    int max = arr[0]; // 以在陣列中的值為初始值

    for (int x = 0; x < loop; x += 1) {

        if (arr[x] > max) { // 求最大值

            max = arr[x];

        }

    }

    printf("Maxinum is %d.\n", max);
    printf("Total   is %d.\n", total);
    printf("Average is %d.\n", total/loop);

    return 0;
}
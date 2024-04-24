#include <stdio.h>

int main() {

    int min, max, isPrime;

    printf("min = ");
    scanf("%d", &min);

    printf("max = ");
    scanf("%d", &max);

    for (int x = min; x <= max; x += 1) { // 在範圍內迴圈

        for (int y = 2; y < x / 2; y += 1) { // 在 2 >= y > x 的範圍內掃出因數

            isPrime = 0; // 防止上個不是因數的數字的結果干擾

            if (x % y == 0) { // 如果有因數
                
                isPrime = 1; // 設「是質數」為真
                break; // 打破掃因數迴圈

            }
        }

        if (isPrime == 0) { // 如果是質數
            printf("%d ", x);

        }
    }

    return 0;
}
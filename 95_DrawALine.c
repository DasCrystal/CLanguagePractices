#include <stdio.h>

int main() {

    int len;

    printf("len = ");
    scanf("%d", &len);

    if (len <= 1000000) { // 限制最大長度，防止不正確的輸入或過大的數字

        for (int x = 1; x <= len; x += 1) {

            printf("*");

        }

    } else {

        printf("Too long or input invaild.");

    }

    printf("\n");

    return 0;
}
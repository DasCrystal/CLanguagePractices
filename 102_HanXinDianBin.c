#include <stdio.h>

/*
#for
#loop

*/

int main() {

    int  min, max;

    printf("min = ");
    scanf("%d", &min);

    printf("max = ");
    scanf("%d", &max);

    for (int x = min; x <= max; x += 1) { // 在1到最大值之間窮舉

        if (x % 3 == 2 && x % 5 == 3 && x % 7 == 2) { // 問題的條件

            printf("%d ", x); //印出符合的結果

        }

    }

    printf("\n");

    return 0;
}
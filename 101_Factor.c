#include <stdio.h>

/*
#order
#loop
#for

*/

int main() {

    int order;

    printf("order = ");
    scanf("%d", &order);

    for (int x = 1; x <= order; x += 1) {

        if (order % x == 0) { // 如果order除以x餘零，則是因數
            printf("%d ", x);
        }
        // if (x % 10 == 0) { // 每10為一階
        //     printf("\n");
        // }

    }

    printf("\n");

    return 0;
}
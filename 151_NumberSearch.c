#include <stdio.h>

/*
#for
#loop
#while
*/

int main() {

    int num[5] = {0}; // 歸零

    for (int x = 1; x <= 5; x += 1) { // 1 <= x <= 5

        printf("num%d = ",x);
        scanf("%d", &num[x-1]);

    }

    int order;

    while (1) {

        printf("order = ");
        scanf("%d", &order);

        if (order == 0) {

            break;
        }

        printf("Number is %d.\n", num[order - 1]);

    }

    return 0;
}
#include <stdio.h>

/*
#while
#array
*/

int main() {

    int prices[5] = {90, 75, 83, 89, 71},
        order, total = 0,
        loop = 0;

    while (1==1) {

        loop += 1;

        if (loop >= 100) {
            
            printf("[ERR]Loop reached %d times, progress stopped.\n", loop);
            return 0;

        }

        printf("order = ");
        scanf("%d", &order);

        if (order == 0) {

            break;

        } else if (order > 6 || order < 1) { // 有關陣列長度

            printf("Invaild order.\n");
            
            continue;
        }

        total += prices[order - 1]; // total 加上 價格陣列中的第 order-1 項

    }

    printf("Total is %d.\n", total);

    return 0;
}
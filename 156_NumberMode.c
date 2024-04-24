#include <stdio.h>

int main() {

    int counter[10] = {0}, // 歸零
        order;

    for (int x = 0; x < 10; x += 1) {

        printf("counter[%d] = ", x);
        scanf("%d", &order);

        counter[order] += 1;

    }

    int max = 0;

    for (int x = 0; x < 10; x += 1) {

        if (counter[x] >= counter[max]) { // 因為要在眾數中求最大的，故 >=

            max = x;

        }

    }

    printf("The mode is %d.\n", max);

    return 0;
}
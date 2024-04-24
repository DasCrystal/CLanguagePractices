#include <stdio.h>

/*
#while
#loop
#for
#array
*/

int main() {

    int ara[50] = {0},
        order, loop = 0;

    while (loop < 50) {
        
        printf("order = ");
        scanf("%d", &order);

        if (order == 0) {

            break;
        }

        ara[loop] = order;

        loop += 1;

    }

    for (int x = 0; x < loop; x += 1) {

        printf("%d ", ara[x]);

    }

    printf("\n");

    return 0;
}
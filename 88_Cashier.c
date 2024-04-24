#include <stdio.h>

/*
#while

*/

int main() {

    int total=0, order;

    while (1==1) { // 無限輪迴
        printf("order = ");
        scanf("%d", &order);

        switch (order) {

            case 0:
                printf("Total is %d.\n", total);
                break;

            case 1:
                printf("total += 90\n");
                total += 90;
                break;

            case 2:
                printf("total += 75\n");
                total += 75;
                break;

            case 3:
                printf("total += 83\n");
                total += 83;
                break;

            case 4:
                printf("total += 89\n");
                total += 89;
                break;

            case 5:
                printf("total += 71\n");
                total += 71;
                break;

            default:
                printf("Not found.\n");

        }
        if (order == 0) {
            // 如果order是零則打破迴圈
            break;
        }
        printf("\n"); // 每次迴圈隔一行
    }
    return 0;
}
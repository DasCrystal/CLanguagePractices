#include <stdio.h>

/*
#for
#while
#loop
#inrange
*/

int main() {

    int nums[10] = {0}; // 歸零

    printf("nums[10] = ");
    // for (int x = 0; x < 10; x += 1) { // 0 <= x <= 9

    //     scanf("%d", &nums[x]);
    // }
    scanf("%d %d %d %d %d %d %d %d %d %d",
          &nums[0], &nums[1], &nums[2], &nums[3], &nums[4],
          &nums[5], &nums[6], &nums[7], &nums[8], &nums[9]
    );

    int orderL, orderR;

    while (1) {

        printf("\norderL,orderR = ");
        scanf("%d,%d", &orderL, &orderR);

        if (orderL == 0 && orderR == 0) {

            break;
        }

        printf(">");
        for (int x = 0; x <= 9; x += 1) { // 0 <= x <= 9 , 10次

            if (orderL <= nums[x] && nums[x] <= orderR) {

                printf("%d ", nums[x]);

            }

        }

    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*
#for
#while
#loop
#abs
*/

int main() {

    int nums[10], order; // 歸零

    for (int x = 0; x <= 9; x += 1) { // 0 <= x <= 9, 10次

        printf("nums[%d] = ", x);
        scanf("%d", &nums[x]);

    }
    
    while (1) {

        printf("order = ");
        scanf("%d", &order);

        if (order == 0) { // 中斷條件

            break;
        }

        int nearstAbs = nums[0]; // 最近的絕對值

        for (int x = 0; x <= 9; x += 1) { // 0 <= x <= 9, 10次

            int oldNearstAbs = abs(order - nearstAbs),
                newNearstAbs = abs(order - nums[x]);
            
            if (newNearstAbs < oldNearstAbs ||
                newNearstAbs == oldNearstAbs &&
                nums[x] < nearstAbs) { // 如果新的絕對值更近

                nearstAbs = nums[x];

            }

        }

        printf("> %d\n", nearstAbs);
    }

    return 0;
}
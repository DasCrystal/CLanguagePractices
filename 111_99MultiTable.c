#include <stdio.h>

/*
#loop
#for
#work
#99

*/

int main() {
    
    // 不需要額外的聲明。

    for (int x = 1; x <= 9; x += 1) {

        for (int y = 1; y <= 9; y += 1) {

            printf("%d x %d = %d\t", x, y, x*y);

            if (y % 3 == 0) {

                // y每進3項換一行
                printf("\n");

            }

        }

        // x每進一項換一行
        printf("\n");

    }

    return 0;

}
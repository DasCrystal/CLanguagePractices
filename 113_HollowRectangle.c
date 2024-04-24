#include <stdio.h>

int main() {

    int W, L;

    printf("<--W--> L = ");
    scanf("%d %d", &W, &L);

    if (W > 10000 || L > 10000) {

        printf("Order out of range (10000) or input invaild.\n", W, L);

        return 0;
    }

    for (int y = 1; y <= L; y += 1) {

        for (int x = 1; x <= W; x += 1) {

            if ( x == 1 || y == 1 || x == W || y == L) { // 左邊框 || 上邊框 || 右邊框 || 下邊框
            
                printf("#");
            
            } else {

                printf(" ");

            }

        }

        printf("\n");

    }

    return 0;

}
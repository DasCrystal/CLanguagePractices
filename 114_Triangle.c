#include <stdio.h>

/*
#for
#loop

座標法

*/


int main() {
    
    int height;

    printf("height = ");
    scanf("%d", &height);

    for (int y = 1; y <= height; y += 1) {

        for (int x = 1; x <= y; x += 1) {

            printf("#");
        }

        printf("\n");

    }

    return 0;

}
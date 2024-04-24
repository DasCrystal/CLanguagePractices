#include <stdio.h>

/*
#function
#void
#char
*/

void DrawTriangle(int height, char symbol);

int main() {

    int height;

    printf("height = ");
    scanf("%d", &height);

    DrawTriangle(height, 'H');

    return 0;

}

void DrawTriangle(int height, char symbol) { // 畫三角形

    for (int y = 1; y <= height; y += 1) {   // 座標上的y軸
        for (int x = 1; x <= y; x += 1) {    // 座標上的x軸

            printf("%c", symbol);            // 列印symbol

        }

        printf("\n");

    }

}
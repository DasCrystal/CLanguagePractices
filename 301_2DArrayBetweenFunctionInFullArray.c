#include <stdio.h>

int printArra(int (*target)[3][3], int xArg, int yArg) {

    for (int y = 0; y < yArg; y += 1) {

        for (int x = 0; x < xArg; x += 1) {

            printf("%d ", (*target)[y][x]);

        }

        printf("\n");

    }

    return xArg*yArg;
}

int main() {

    int ara[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printArra(&ara, 3, 3);

    return 0;
}

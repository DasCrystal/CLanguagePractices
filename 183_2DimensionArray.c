#include <stdio.h>

/*
#array
#for
#2darray
*/

int main() {

    int div9[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (int y = 0; y < 3; y += 1) {

        for (int x = 0; x < 3; x += 1) {

            printf("%d ", div9[y][x]);

        }

        printf("\n");

    }

    return 0;
}
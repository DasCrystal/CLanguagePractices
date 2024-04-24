#include <stdio.h>

/*
#for
#loop

*/

int main() {

    int width, length;

    printf("width = ");
    scanf("%d", &width);

    printf("length = ");
    scanf("%d", &length);

    for (int x = 1; x <= width; x += 1) {

        for (int y = 1; y <= length; y += 1) {

            printf("#");

        }

        printf("\n");

    }

    return 0;
    
}
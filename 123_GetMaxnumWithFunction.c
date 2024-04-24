#include <stdio.h>

/*
#maxinum
#function

*/

int getmax(int x,int y);

int main() {

    int x, y, max;

    printf("x,y = ");
    scanf("%d,%d", &x, &y);

    max = getmax(x,y);

    printf("Maxinum number is %d.\n", max);
    return 0;
}

int getmax(int x, int y) {

    int max;

    if (x > y) {

        return x;

    } else { // (x < y)

        return y;

    }

}
#include <stdio.h>

int print2dArray(int *target, int xArg, int yArg) {

    for (int y = 0; y < yArg; y += 1) {

        for (int x = 0; x < xArg; x += 1) {

            printf("%d ", *(target+(y*xArg)+x)); // *(&[0][0]+(大格*小格寬)+小格)

        }

        printf("\n");

    }

    return xArg*yArg;
}

int main() {

    int ara[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    print2dArray(&(ara[0][0]), 3 ,3);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
#dice
#for
#loop

*/

int dice(int sides);

int main() {

    int times = 0,   // 要骰幾次
        point,            // 骰出的點數
        points[12] = {0}; // 點數的計數器，全部設成0

    srand(time(0)); // 給種子

    printf("times = ");
    scanf("%d", &times);

    for (int x = 1; x <= times; x += 1) {

        point = dice(6) + dice(6);

        points[point - 1] += 1;

    }

    for (int x = 2; x <= 12; x += 1) {

        printf("%d point: %d \ttimes.\n", x, points[x-1]);

    }

    return 0;
}

int dice(int sides) {

    return rand() % sides + 1;
}
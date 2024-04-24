#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
#switch
#dice
#for
#array
*/

int dice(void);

int main() {

    int points[6] = {0, 0, 0, 0, 0, 0}, // 點數的計數器
        point;                          // 點數

    srand(time(0));

    for (int x = 1; x <= 60000; x += 1) {

        point = dice();

        points[point - 1] += 1; // 不考慮Invaild.

    }

    for (int x = 1; x <= 6; x += 1) { // 1 <= x <= 6

        // 依陣列順序印出結果
        printf("%d point: %d\t times.\n", x, points[x-1]);

    }
    
}


int dice(void) {

    return rand() % 6 + 1;

}
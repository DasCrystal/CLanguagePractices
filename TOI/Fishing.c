#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int *local, n, **fish;

    local = malloc(sizeof(int)*2);

    scanf("%d %d %d", &local[0], &local[1], &n); // 讀入x, y, n

    fish = malloc(sizeof(int)*3);
    fish[0] = malloc(sizeof(int)*n); // 平方軌
    fish[1] = malloc(sizeof(int)*n); // x軌
    fish[2] = malloc(sizeof(int)*n); // y軌

    for (int lo = 0; lo < n; lo += 1) {

        int n1, n2;

        scanf("%d %d", &n1, &n2);

        fish[1][lo] = n1;
        fish[2][lo] = n2;

        fish[0][lo] = (n1 - local[0]) * (n1 - local[0]) 
                    + (n2 - local[1]) * (n2 - local[1]);

    }

    int min = 0;
    for (int lo = 0; lo < n; lo += 1) {

        if (fish[0][lo] < fish[0][min]) {

            min = lo;

        }

    }

    printf("%d %d", fish[1][min], fish[2][min]);

    return 0;
}
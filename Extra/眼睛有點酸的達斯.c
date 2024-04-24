#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    int seed = 0;

    // 設置seed
    printf("seed = ");
    scanf("%d", &seed);
    srand(seed);

    while (1) {

        int decide = rand() % 100;

        if (decide <= 30) {

            if ((decide % 10) <= 3) {

                printf("\r>uO");

            } else if ((decide % 10) <= 7) {

                printf("\rOu<");

            } else {

                printf("\r>u<");

            }

        } else {

            printf("\rOuO");

        }

        Sleep(200);

    }

    return 0;
}
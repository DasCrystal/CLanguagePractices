#include <stdio.h>

/*
#for
#loop
#result
#results

*/

int main() {

    int min, max, results=0;

    printf("min = ");
    scanf("%d", &min);

    printf("max = ");
    scanf("%d", &max);

    for (int x = min; x <= max; x += 1) {

        if (results >= 3) {

            break; // 找到三個了，就不繼續找了

        }

        if (x % 3 == 2 && x % 5 == 3 && x % 7 == 2) {

            printf("%d ", x);
            results += 1; // 找到一個結果了

        }

    }

    for (; results < 3; results += 1) {
        
        printf("- ");
    }

    printf("\n");

    return 0;

}
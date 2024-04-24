#include <stdio.h>

/*
#for
#loop
#maxinum
#mininum
#max
#min

最大/最小值
  找「最大值」時由「大」往「小」找
  找「最小值」時由「小」往「大」找
*/

int main() {

    int max;

    printf("max = ");
    scanf("%d", &max);

    for (int x = max; x >= 1; x -= 1) { // 在1到最大值之間窮舉

        if (x % 3 == 2 && x % 5 == 3 && x % 7 == 2) { // 問題的條件

            printf("\r      %d", x); //印出符合的結果
            break;

        }

    }

    printf("\n");

    return 0;
}
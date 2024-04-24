#include <stdio.h>

/*
#loop
#total
#formula

連續整數的公式解
  從from到to:
    ((from + to) * (to - from + 1)) / 2
*/

int main() {

    int total=0, from, to;

    printf("from = ");
    scanf("%d", &from);
    printf("to = ");
    scanf("%d", &to);

    total = ((from + to) * (to - from + 1)) / 2; // 記得包含第一項(to - from + 1 那裡)
    // for (int x = from; x <= to; x += 1) {
    //         total += x;
    // }

    printf("Total is %d.\n", total);

    return 0;
}
#include <stdio.h>

int main() {

    int order[6] = {0};

    for (int lo = 0; lo < 1; lo += 1) {

        scanf("%d", &order[lo]);

    }

    for (int lo = 0; lo < 1; lo += 1) {

        printf("%d ", order[lo]);

    }
}
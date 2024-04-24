#include <stdio.h>

void plusOne(int *target) {

    *target += 1;

}

int main() {

    int num = 0;

    plusOne(&num);

    printf("%d\n", num);

    return 0;
}
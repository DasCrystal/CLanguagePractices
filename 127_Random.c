#include <stdio.h>
#include <stdlib.h>

int main() {

    srand(time(0));

    for (int x = 1; x <= 5; x += 1) {

        printf("%d\n", rand());

    }

    return 0;

}
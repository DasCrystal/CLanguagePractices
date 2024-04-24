#include <stdio.h>

int main() {
    char achar;
    printf("alphabet>>");
    scanf("%c", &achar);
    if (achar < 97) {
        achar += 32;
    } else {
        achar -= 32;
    };
    printf("You got %c\n", achar);
    return 0;
}
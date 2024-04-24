#include <stdio.h>
#include <string.h>

/*
#function
#array
#char
#pointer
#string
*/

int main() {

    char string[] = "Hello";
    char target[3];

    strcpy(target, string);

    printf("%s\n", target);

    return 0;
}
#include <stdio.h>
#include <string.h>

/*
#char
#string
#string.h
#strcmp
#strcpy
#for
#len

不要再把加等於打成等於加了
*/

int main() {

    char strings[100][21];
    int len = 0;

    while (1) {

        char buffer[21];

        printf("buffer[0] = ");
        scanf("%s", buffer);

        if (strcmp(buffer, "END") == 0) {

            break;
        }

        strcpy(strings[len], buffer);

        // for (int x = 0; x < 21; x += 1) {

        //     strings[len][x] = buffer[x];

        // }

        len += 1;
    }

    printf("----------\n");

    for (int x = 0; x < len; x += 1) {

        printf("%s ", strings[x]);

    }

    printf("\n");

    return 0;
}
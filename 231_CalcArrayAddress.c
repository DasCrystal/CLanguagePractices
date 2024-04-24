#include <stdio.h>

/*
#pointer
#function
*/

void printArray(int target[], int len);

int main() {

    int numArra[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, *numAddr;

    numAddr = &numArra[1] + 1; // numArra[2]

    printf("*numAddr = %d\n", *numAddr);
    printArray(numArra, 10);

    printf("\n");

    return 0;
}

void printArray(int target[], int len) {

    printf("{");
    for (int x = 0; x < len; x += 1) {

        printf("%d ", target[x]);

    }

    printf("\b}"); // 加\b(backspace)的用意是為了刪去最後一次列印多出的那塊空白

}
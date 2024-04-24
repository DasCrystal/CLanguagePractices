#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
#stdlib.h
#time.h
#while
#work
*/

int dice();

int main() {

    srand(time(0)); // 給種

    printf("\r[%d]", dice());

    printf("\n");

    return 0;
}

int dice() {

    int num = rand();

    while (num >= 4294967293) { // 將隨機數的範圍限制在六種可能的機會皆均等的範圍內

        num = rand();

    }

    return num % 6 + 1;

}


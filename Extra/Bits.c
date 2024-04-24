#include <stdio.h>

#define BIT1 0x01
#define BIT2 0x02
#define BIT3 0x04


int main() {

    int data = BIT1|BIT2|BIT3;

    if (data & BIT1) {

        printf("tada");

    } 
}
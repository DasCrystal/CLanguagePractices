#include <stdio.h>

/*
#sort
#min
#max


*/
int main() {
    int num1, num2, num3, max, min, total;

    printf("num1,num2,num3 = ");
    scanf("%d,%d,%d", &num1, &num2, &num3);
    
    total = num1 + num2 + num3;

    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    
    num1 = min;
    num2 = total - max - min;
    num3 = max;

    printf("[%d,%d,%d]\n", num1, num2, num3);
    return 0;
}
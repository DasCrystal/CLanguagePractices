#include <stdio.h>

int main() {
    int num1, num2, num3, result;

    printf("num1 = ");
    scanf("%d", &num1);
    printf("num2 = ");
    scanf("%d", &num2);
    printf("num3 = ");
    scanf("%d", &num3);
    
    result = num1;
    if (num2 > result) {
        result = num2;
    }
    if (num3 > result) {
        result = num3;
    }
    
    printf("Maxinum number is %d.\n", result);
    return 0;
}
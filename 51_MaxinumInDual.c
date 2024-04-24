#include <stdio.h>

/*
#maxium
*/

int main() {
    int num1, num2, result;

    printf("num1 = ");
    scanf("%d", &num1);
    printf("num2 = ");
    scanf("%d", &num2);
    
    result = num1;
    if (num2 > result) { //等於亦併入此式
        result = num2;
    }

    printf("Maxinum number is %d.\n", result);
    return 0;
}
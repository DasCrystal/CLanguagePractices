#include <stdio.h>
/*
#mininum

*/
int main() {
    int num1, result;

    printf("num1,num2 = ");
    scanf("%d,%d",&num1, &result);
    
    if (num1 < result) {
        result = num1;
    }

    printf("Mininum is %d.\n", result);
    return 0;
}
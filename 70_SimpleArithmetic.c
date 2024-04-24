#include <stdio.h>

/*
#switch
#operator
#scanf
#changetype

*/

int main() {
    int num1, num2; double result; char method;
    printf("num1(+-*/)num2 = ");
    scanf("%d%c%d", &num1, &method, &num2);
    
    switch (method) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("INVAILD operator.\n");
            return 0;
    }

    printf("result = %lf\n", result);
    return 0;
}
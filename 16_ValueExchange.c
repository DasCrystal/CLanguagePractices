#include <stdio.h>

/*
#exchange

數值交換
    原則：先讀變數，再改變數。
*/
int main() {
    int num1=0, num2=0, cache=0;

    printf("%d,%d,%d",num1,num2,cache);
    printf("\nNumber1:");
    scanf("%d",&num1); // \n
    printf("\nNumber2:");
    scanf("%d",&num2); // \n

    cache = num1;
    num1 = num2;
    num2 = cache;

    printf("[%d,%d]",num1,num2);
    printf("\n"); return 0;
}
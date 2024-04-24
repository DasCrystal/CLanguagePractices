#include <stdio.h>

/*
#sort
#exchange

數值交換
    課程的方法
        以先轉移變數的值之後，再改變變數的值。
    我的方法
        把要交換的變數全部加在一起，
        然後針對要變更的變數用加減法取值，
        一加二行就能交換兩個值。
        特別注意這種方式在使用時不需要考慮之前的修改，
        只要針對要取的值扣去總和中其他的值即可。
        如：num1 = total - num2 - num3;
*/

int main() {
    int num1, num2, num3, cache;

    printf("num1,num2,num3 = ");
    scanf("%d,%d,%d", &num1, &num2, &num3);
    
    if (num1 < num2 && num2 < num3) {
        // 什麼都不用做
    }
    if (num1 > num2) {
        cache = num1;
        num1 = num2;
        num2 = cache;
    }
    if (num2 > num3) {
        cache = num2;
        num2 = num3;
        num3 = cache;
    }
    if (num1 > num2) {
        cache = num1;
        num1 = num2;
        num2 = cache;
    }

    printf("[%d,%d,%d]\n",num1 ,num2 ,num3);
}
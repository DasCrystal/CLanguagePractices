#include <stdio.h>

/*
#candy
#array
#subscript

陣列與下標([])

    下標就是用於表示指標偏移量的一種語法糖。

    作用：a[b] = *(a+b) = *(指標內裡存的地址 + 偏移量(整數))
    (a與b可以互換)

    我們平常用的arra[index]這種形式，
    其意義即是 *(&arra[0] + index)，
    其中index是一個整數，arra是一個陣列。

*/

int main() {

    int numArra[10] = {1,2,3,4,5,6,7,8,9,0};
    int num = 0, num1 = 1, num2 = 2; // num的地址不知道為什麼比numArra前面，說不定地址是由大到小指派的？

    printf("&num = %d, \tnum = %d.\n", &num, num);
    printf("&num1 = %d,\tnum1 = %d.\n", &num1, num1);
    printf("&num2 = %d,\tnum2 = %d.\n\n", &num2, num2);

    printf("&numArra[0] = %d, \tnumArra[0] = %d.\n", &numArra[0], numArra[0]); // 普通的陣列
    printf("&0[numArra[0]] = %d, \t0[numArra[0]] = %d.\n", &0[numArra], 0[numArra]); // 有點東西的陣列
    
    
    return 0;
}
#include <stdio.h>

/*
#string
#function

字串
    字串本質上是一個char型別的陣列，
    但是字串的後面會多出一個'\0'來
    代表字串結束。
    在printf中以%s作為標示符。
*/

int print(char target[]);
int len(char target[]);

int main() {

    int result;

    // char string[] = {'H','e','l','l','o'};
    char string[] = "Hello";

    print(string);
    
    printf("Length is %d.\n", len(string));

    return 0;
}

int print(char target[]) { // 自帶字數計算功能

    int x; // x == result

    printf("\"");

    for (x = 0; target[x] != '\0'; x += 1) { // 0 <= x <= target[x](=0) // 印出一個字後 x + 1，不計入'\0'

        printf("%c", target[x]);

    }

    printf("\"\n"); // 這個print會自動換行喔

    return x;
}

int len(char target[]) {

    int x = 0; // x == result

    while (target[x] != '\0' && x <= 1000000) {

        // 不用for的原因：
        // 1.因為我不知道for的大括弧裡要寫什麼，
        // 空著又很奇怪，故直接用while。
        // 2.如果用for小括弧的中間會太長。

        x += 1;

    }

    return x;
}
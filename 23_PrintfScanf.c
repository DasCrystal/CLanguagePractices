#include <stdio.h>

/*
#資料型態
#printf
#scanf
*/

/* 資料型態
    變數中的資料是用二進位的形式儲存的，
    而每種資料型態各自有不同的二進位形式，
    故在使用printf()函式時必須指定正確的讀取方式，
    才能讀出正確的資訊。
   
   scanf()
    指定變數位址，而不是變數名稱。
*/

int main() {
    int a = 100;
    unsigned int b = 100;
    printf("%i\n", a);
    printf("%u\n", b);
    return 0;
}
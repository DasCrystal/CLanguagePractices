#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
#for
#loop
#stdlib.h
#time.h
#array

函式參數
    陣列
        以記憶體地址的形式傳入。
        不能作為回傳值回傳，
        但可以在函式內直接修改本體。
        傳入的陣列不是陣列，
        而是一種可以存取原陣列的資料型態，
        故無法利用sizeof()在函式中取得陣列長度。
    變數
        以值的形式傳入。
        可以作為回傳值回傳。
        每次呼叫函式都會複製一份。
*/

void randlize(int target[], int size);

int main() {

    int numArray[10];

    randlize(numArray, 10);

    for (int x = 0; x < 10; x += 1) {

        printf("%d ", numArray[x]);

    }

    printf("\n");

    return 0;
}

void randlize(int target[], int size) {

    srand(time(0));

    for (int x = 0; x < size; x += 1) {

        target[x] = rand() % 100;

    }

}
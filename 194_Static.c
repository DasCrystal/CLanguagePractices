#include <stdio.h>

/*
#static
#global
#function

static
    只會初始化一次。
    受限於聲明的函數中，
    不會與其他函數中的變數重疊。
全域變數
    在編譯時就初始化了，
    故其值不能指定為函數的回傳值
    或其他的全域變數。
    沒有指定初始值時，初始化為零。
static x 全域變數
    把全域變數的範圍限制在這個檔案內。
*/

int func() {

    static int counter = 0;

    counter += 1;
    
    return counter;
}

int main() {

    printf("counter is %d.\n", func());
    printf("counter is %d.\n", func());
    printf("counter is %d.\n", func());
    printf("counter is %d.\n", func());
    printf("counter is %d.\n", func());

    return 0;
}
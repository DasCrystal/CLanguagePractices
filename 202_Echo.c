#include <stdio.h>

/*
#keyboard
#input
#while
#improve

輸入

    鍵盤 -> 緩衝區 -Enter之後進行寫入-> stdin <-讀取- 程式

    程式在執行到scanf時會檢查stdin中有沒有新的資料，如果沒有，
    程式會停住，直到stdin中有新的資料寫入，
    而stdin在鍵盤輸入完，按下輸入鍵後才會被寫入新的資料。

*/

void input(char target[], char end, int max);

int main() {

    char buffer[10] = ""; // 字串式的歸零

    printf("buffer = ");
    input(buffer, '\n', 10);

    printf("buffer =>%s\n", buffer);

    return 0;
}

void input(char target[], char end, int max) { // 記得把要傳入的陣列歸零之後再傳進來

    int x = 0;
    while (x < max) { // 值還沒達到max之前

        scanf("%c", &target[x]);

        if (target[x] == end) { // 如果讀到了結束字元

            break;
        }

        x += 1; // 準備讀下一個字 

    }

    target[x] = '\0'; // 去除最後一個做為輸入鍵的字元，改為null

}
#include <stdio.h>
#include <string.h>

/*
#char
#atring
#array
#while
#improve
*/

int main() {

    char strpool[2000];      // 將字串可用的記憶體池的大小設為2000
    int count = 0, size = 0;
    
    while (1) {

        char buffer[21]; // 緩衝區

        printf("[%d]>", count);
        scanf("%s", buffer);

        if (strcmp(buffer, "END") == 0) { // 如果輸入的字串為END

            break;
        }

        strcpy(&strpool[size], buffer); // 將 buffer 寫入 strpool

        size += strlen(buffer) + 1;     // 更新 size 為 目前緩衝區長度 + 1

        strpool[size-1] = ' ';          // 將最後輸入的字串的最後面從 '\0' 換成 ' '

        count += 1; // 顯示的迴圈數+1
    }

    printf("----------\n");

    for (int x = 0; x < size; x += 1) {

        printf("%c", strpool[x]); // 將 strpool 的內容依照字元順序印出

    }

    printf("\n"); // 最後換一行

    return 0;
}
#include <stdio.h>
#include <string.h>

/*
#char
#atring
#array
#while
#improve
#pointer
*/

int main() {

    char strpool[2000], *string[100] = {0};      // 將字串可用的記憶體池的大小設為2000
    int len = 0, size = 0;
    
    while (1) {

        char buffer[21]; // 緩衝區

        printf("[%d]>", len);
        scanf("%s", buffer);

        if (strcmp(buffer, "END") == 0) { // 如果輸入的字串為END

            break;
        }

        strcpy(&strpool[size], buffer); // 將 buffer 寫入 strpool

        string[len] = &strpool[size];   // 以 &strpool[0] 為基準，偏移 size

        size += strlen(buffer) + 1;     // 更新 size 為 目前緩衝區長度 + 1

        len += 1; // 顯示的迴圈數+1
    }

    printf("----------\n");

    for (int x = 0; x < len; x += 1) {

        printf("%s ", string[x]); // 將 strpool 的內容依照字元順序印出

    }

    printf("\nlen = %d, size = %d.\n", len, size); // 印出資訊後換一行

    return 0;
}
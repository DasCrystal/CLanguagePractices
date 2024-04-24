#include <stdio.h>
#include <stdlib.h>

/*
#while
#loop
#for
#array
#malloc
#free

手動配置記憶體

    malloc：void *malloc(size_t size);

        手動配置一段尺寸為 size 的連續記憶體空間，
        並回傳一個地址(可以賦值給指標)。
        以此種方式配置的記憶體不會因離開了作用域而被自動釋放。

    free：void free(void* p);

        手動釋放地址為 p 的那段記憶體空間。
        傳入空指標不會造成未定義行為。

*/

int main() {

    int order, loop = 0;
    int *ara = 0;

    while (1) {

        printf("order[%d] = ", loop); // 輸入
        scanf("%d", &order);          // 儲存

        if (order == 0) break; // 可以不用大括號，用分號結尾也行。

        int *dyara = malloc(sizeof(int)*(loop+1)); // 聲明一個新的，比迴圈數大1的陣列 

        for (int x = 0; x < loop; x += 1) {        // 將舊的內容複製到新的陣列

            // 第一次輸入時不會執行，故不會有還沒初始化 ara 就讀取 ara 的狀況發生
            dyara[x] = ara[x];

        }

        free(ara);                                 // 釋放舊指標指向的的陣列

        ara = dyara;                               // 將指標指向新聲明的陣列

        ara[loop] = order;                         // 將輸入的值指定給 ara 所指向的陣列  

        loop += 1;
    }

    for (int x = 0; x < loop; x += 1) {

        printf("%d ", ara[x]);

    }

    printf("\n");

    return 0;
}
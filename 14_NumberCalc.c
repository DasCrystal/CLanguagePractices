#include <stdio.h>

/* 
#可讀性

撰寫時應該考慮的東西
    :: 可讀性
    :: CPU及記憶體的占用量
    :: 可擴展性
*/

// scanf的細節：指定要變數地址(&)而不是變數名稱。
int main() {
    int num=0, result=0;
    for (int x=0; x<3; x+=1) { //內容(顯示，輸入，存入)重複3次
        printf("第%d個數字(0x%X):", x, &num);
        scanf("%d",&num);
        result += num;
    };
    printf("結果是%d",result);
    printf("\n");
    return 0;
}
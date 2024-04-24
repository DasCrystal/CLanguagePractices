#include <stdio.h>

/*
#pointer
#array

指標與陣列

    指標
        一種用來存地址的容器。
    陣列
        儲存一段「連續記憶體空間開頭」的指標。

    所以，如果我們把指標裡的地址存成某個陣列的地址，
    也就是那段記憶體空間的開頭，
    那麼對這個指標的操作與對原本的陣列操作是相同的。

    a[b] = *(a+b)，a[1] = *(&a[0]+1)

    陣列會隱式轉型成指向第一個元素的地址。

*/

int main() {

    int arra[3] = {1,2,3};

    int *numAddr = &arra[0];

    printf("*(arra+1) = %d\n", *(arra+1));
    printf("arra[1] = %d\n", arra[1]);
    printf("numAddr[1] = %d\n", numAddr[1]);

    return 0;
}
#include <stdio.h>

/*
#pointer
#array
#ara
*/

int main() {

    int arra[3] = {1,2,3};

    int *arraAddr = arra;      // 第一個元素的指標

    int (*arraddr)[3] = &arra; // 陣列指標，包含長度資訊

    return 0;
}
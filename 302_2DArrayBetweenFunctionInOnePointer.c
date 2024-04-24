#include <stdio.h>

/*
#for
#function
#array

二維陣列在函式間的傳遞
    二維陣列與一維陣列最大的不同就是
    雖然二維陣列也可以直接用一個指向本身的指標來傳遞自己，
    但是這種寫法會導致函式只能接收單一種長度的陣列。

    要傳遞二維陣列，首先要做的是建立一個指標陣列，
    我們先稱它為描述陣列(DesArray)，在描述陣列中
    依序放入二維陣列的各個元素，然後再將描述陣列
    傳入函數中。注意函數端引數的前面要寫 ** 才能
    正常運作。
    
*/

int printDes(int **target, int xArg, int yArg) { // **target，因為要傳入的是二維陣列(指標的指標)

    for (int y = 0; y < yArg; y += 1) {

        for (int x = 0; x < xArg; x += 1) {

            printf("%d ", target[y][x]); // 先y再x

        }

        printf("\n");

    }

    return 0;
}

int main() {

    int ara[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *araDes[3] = {ara[0],ara[1],ara[2]};   // ara 的描述陣列

    printDes(araDes, 3, 3);

    return 0;
}
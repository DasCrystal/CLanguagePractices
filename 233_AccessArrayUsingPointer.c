#include <stdio.h>

/*
#pointer
#addr
#address
#array

陣列地址
    一個長度為len的陣列的地址位址從
    arra[0] 到 arra[len]，雖然arra[len]
    不存在，但&arra[len]是合法的。
    
*/

int main() {

    int numArray[3] = {1, 2, 3};

    for (int *Addr = &numArray[0]; Addr < &numArray[3]; Addr += 1) {

        printf("%d ", *Addr);

    }

    printf("\n");

    return 0;
}
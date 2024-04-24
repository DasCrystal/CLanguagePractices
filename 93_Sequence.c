#include <stdio.h>

/*
#loop
#for

for迴圈
  小括弧裡面只有「兩個」分號分隔三條程式碼。
*/

int main() {

    // 不需要聲明變數。

    for (int x = 1; x <= 10; x += 1) {

        if ((x % 2 == 0) && (x % 3 != 0)) {
            printf("%d\n", x);
        }
        
    }
    return 0;
}
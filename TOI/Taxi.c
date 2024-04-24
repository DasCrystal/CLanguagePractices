#include <stdio.h>

int main() {

    int k, w, t0, t1,
        total = 0;

    scanf("%d %d %d %d", &k, &w, &t0, &t1);

    // 總公里數
    if (k <= 2) {

        total += 20;

    } else {
        
        total += 20 + ((k - 2) * 5);

    }

    // 延滯時間
    total += (w / 2) * 5;

    // 搭乘時間
    for (int lo = t0 + 1; lo <= t1; lo += 1) {
        
        if (lo == 19) {

            total += 185;
            
        } else if (lo == 20) {

            total += 195;

        } else if (lo == 21) {

            total += 205;

        } else if (lo == 22) {

            total += 215;

        } else if (lo == 23) {

            total += 225;

        }


    }

    printf("%d", total);

}
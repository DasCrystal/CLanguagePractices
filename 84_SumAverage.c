#include <stdio.h>

/*
#average
#loop
#while
#total
*/

int main() {

    double num, total, loop=0;

    while (1==1) {
        
        // 接收結果
        printf("total += ");
        scanf("%lf", &num);
        
        // 判斷是否為零
        if (num != 0) {
            // 將num加入total
            total += num;
            loop += 1;
        } else {
            // 跳出迴圈
            break;
        }
        
    } 
    
    total /= loop;

    printf("Result is %lf.\n", total);
}
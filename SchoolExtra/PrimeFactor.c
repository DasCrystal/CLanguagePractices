#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n, div = 1;
    
    // printf("n = ");
    scanf("%d", &n);
    
    int *primes = malloc(1); // 第一格記載目前長度
    primes[0] = 1;
    
    for (int y = 2; y <= n; y += 1) { // get 2~n(包含n) 之間的質數，這是為了防止n本身是質數時漏掉，造成之後的麻煩
        
        int prime = 1;
        
        for (int x = 2; x < y; x += 1) { // 確認沒有除了1與自己以外的其他因數
            
            if (y % x == 0) { // 要是被抓到不是質數
                
                prime = 0;    // 褫奪質數權!
                
            }
            
        }
        
        if (prime == 1) { // 如果 y 是質數，存入 primes

            primes = realloc(primes, sizeof(int)*(primes[0]+1)); // 將空間增大一格
            primes[0] += 1; // 長度增加了一格，記錄下來

            primes[primes[0]-1] = y; // 陣列長度減一即是陣列最後一項的索引
        
        }

    }
    
    // for (int x = 0; x < primes[0]; x += 1) {

    //     printf("%d ", primes[x]);

    // }

    printf("1");
    while (n != div) { // 當 n == div 時即代表 n 等於 到目前為止印過的所有數字的乘積
        
        for (int x = 1; x < primes[0]; x += 1) { // 測試列表中的質數是不是n的因數
        
            if ((n / div) % primes[x] == 0) {
                
                // printf("\n|primes[%d], div, n = %d, %d, %d\n", x, primes[x], div, n);
                printf("*%d", primes[x]); // 印出驗證過的質數，也就是 n 的質因數
                
                div *= primes[x];

                break; // 找到一個質因數，乘入 div 裡，再找下一個
            }

        }

    }
    // printf("\b");
    
    return 0;
}
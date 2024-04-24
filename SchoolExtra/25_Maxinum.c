#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int N, max, length = 1;
    
    // printf("");
    scanf("%d", &N);
    
    for (int x = 1; N / x >= 10; x *= 10) { // 如果Nx相除後的餘仍大於等於10，那麼x的長度不等於N
        
        length += 1;
        
    }
    
    int *nums = malloc(length);
    
    for (int x = 0; x < length; x += 1) { // 將內容存入nums
        
        nums[x] = (N % (int)pow(10, x+1) / (int)pow(10, x));
        
    }
    
    max = nums[0]; // 將最大項設為第0項
    for (int x = 1; x < length; x += 1) { // 依序比較各項大小
        
        if (nums[x] > max) {
            
            max = nums[x];
            
        }
        
    }
    
    printf("%d %d", length, max);
    
}
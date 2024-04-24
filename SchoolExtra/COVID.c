#include <stdio.h>
#include <stdlib.h>

#define Period 12

int main() {
    
    int n, **data, *result = 0;
    int resultLen = 0;
    
    scanf("%d", &n);
    
    data = malloc(sizeof(int)*(n+1));
    // data[0]           = 使用者
    // data[1~n]         = 確診者
    
    // data[*][0]        = 電話號碼
    // data[*][1~Period] = 足跡
    
    // result = malloc(sizeof(int)*1);
    
    // 讀入確診者資料
    for (int lo = 1; lo <= n; lo += 1) {
        
        data[lo] = malloc(sizeof(int)*(1+Period));
        
        for (int lo1 = 0; lo1 <= Period; lo1 += 1) {
            
            scanf("%d",&data[lo][lo1]);
            
        }
        
    }
    
    // 讀入使用者資料
    data[0] = malloc(sizeof(int)*(1+Period));
    
    for (int lo = 0; lo <= Period; lo += 1) {
            
        scanf("%d",&data[0][lo]);
            
    }
    
    // 分析
    for (int lo = 1; lo < n; lo += 1) {
        
        for (int lo1 = 1; lo1 <= Period; lo1 += 1) {
            
            if (data[0][lo1] == data[lo][lo1]) {
                
                result = realloc(result, resultLen + 1);
                resultLen += 1;
                
                result[resultLen-1] = data[lo][0];
                
            }
            
        }
        
    }
    
    // 輸出
    if (result == NULL) {
    
        printf("Safe!");
        
    } else {
        
        for (int lo = 0; lo < resultLen; lo += 1 ) {
    
            printf("%d ", result[lo]);
            
        }
        
    }

    return 0;    
}
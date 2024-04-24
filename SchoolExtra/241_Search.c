#include <stdio.h>

int search(int len, int *target);

int main() {
    
    int array[9] = {3, 8, 2, 9, 1, 6, 5, 4, 7};
    
    search(9, array);
    
    return 0;
}

int search(int len, int *target) {
    
    int order, result = 0;
    scanf("%d", &order);
    
    for (int x = 0; x < len; x += 1) {
        
        if (target[x] == order) {
            
            result = x + 1;
            break;
        }
        
    }
    
    if (result != 0) {
        
        printf("在索引 %d", result-1);
        
    } else {
        
        printf("沒搜尋到資料");
        
    }
    
}
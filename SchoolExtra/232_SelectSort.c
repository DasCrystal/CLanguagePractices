#include <stdio.h>

void SelectSort(int len, int *target, int display);

int main() {
    
    int array[5] = {4, 3, 5, 1, 2};
    // int array[5] = {1,2,3,4,5};


    
    SelectSort(5, array, 1);
    
    printf("排序好的陣列為\n");
    for (int x = 0; x < 5; x += 1) {
        
        printf("%d ", array[x]);
        
    }
    
    return 0;
}

void SelectSort(int len, int *target, int display) {
    
    if (display == 1) { // 當使用者要求輸出過程時
            
        for (int x = 0; x < len; x += 1) {
            
            printf("%d ", target[x]);
            
        }
        printf("\n");
            
    }
    
    int fine = 0;
    for (int y = len - 1; y >= 0; y -= 1) {
        
        fine = 2;

        int max = 0; // reset
        
        for (int x = 0; x <= y; x += 1) { // calc
            
            if (target[x] > target[max]) {
                
                max = x;
                
            }
            
        }
        
        // 將最大數設為最後一項
        if (target[y] != target[max]) {

            int ex = target[max];
                target[max] = target[y];
                target[y] = ex;

            fine = 1;
        }
        
        if (fine == 2) {
            
            break;
        }

        // display
        if (display == 1) { // 當使用者要求輸出過程時
            
            for (int x = 0; x < len; x += 1) {
            
                printf("%d ", target[x]);
            
            }
            printf("\n");
            
        }
        
    }
    
    
}
#include <stdio.h>
#include <stdlib.h>

void Add(int * array, int len, int target) {
    
    if (len == 1) {
        
        array[0] = target;
        
        return;
        
    }
    
    array = realloc(array, sizeof(int)*(len+1));
    
    array[len] = target;
    
}

void ZeroFirstValue(int * array, int len) {
    
    for (int lo = 0; lo < len; lo += 1) {
        
        if (array[lo] != 0) {
            
            array[lo] = 0;
            break;
            
        }
        
    }
    
}

int main() {

    int *data = malloc(sizeof(int)*1), dataIndex = 0;
    
    signed int order = 0;
    while (order != -1) {
        
        scanf("%d", &order);
        
        if (order == 1) {
            
            scanf("%d", &order);
            
            Add(data, dataIndex + 1, order);
            
            dataIndex += 1;
            
        } else if (order == 2) {
            
            ZeroFirstValue(data, dataIndex + 1);
            
        }
        
        if (order == 3) {
            
            printf("\n--------\n");
            for (int lo = 0; lo <= dataIndex; lo += 1) {
        
                printf("%d %d\n", lo, data[lo]);
        
            }
            printf("--------\n");
            
        }
        
    }
    
    for (int lo = 0; lo <= dataIndex; lo += 1) {
        
        if (data[lo] != 0) {
        
            printf("%d %d\n", lo, data[lo]);
            
        }
        
    }
    
}
#include <stdio.h>

int ainb(int a, int *b, int length) {

    printf("Ainb.");
    
    for (int x = 0; x < length; x += 1) {
        
        if (b[x] == a) {
            
            return 1;
        }
        
    }
    
    return 0;
}

int zero(int *target, int length) {

    printf("Zero.");

    int x;
    
    for (x = 0; x < length; x += 1) {
        
        target[x] = 0;
        
    }
    
    return x;
}
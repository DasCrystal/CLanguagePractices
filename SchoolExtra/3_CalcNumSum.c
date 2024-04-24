#include <stdio.h>

int main() {
    
    int result = 0;
    char order[3] = {0};
    
    // printf("");
    scanf("%c%c%c", &order[0], &order[1], &order[2]);
    
    for (int x = 0; x < 3; x += 1) {
        
        result += (int)order[x] - 48;
    
    }
    
    printf("%d", result);
    
}
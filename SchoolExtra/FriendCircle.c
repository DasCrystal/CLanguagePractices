#include <stdio.h>
#include <stdlib.h>

int ainb(int a, int *b, int length);
// int zero(int *target, int length);

int main() {
    
    int N, head, loops = 0;
    
    // printf("");
    scanf("%d", &N);
    
    int *friends = malloc(N),
        *searched = malloc(N);
        
    int circles = 0;
    
    for (int x = 0; x < N; x += 1) { // 讀入朋友資料
        
        // printf("");
        scanf("%d", &friends[x]);
        
    }
    
    int *gofind = &friends[0];
    for (int x = 0; x < N; x += 1) {
        
        if (ainb(x, searched, N) == 0) { // 不在表內
            
            head = x;   // 設頭部為目前這個人
            
            while (1) { // 開始找圈圈
                
                if (friends[*gofind] != head) { // 如果目前的要找的朋友不是頭部那個
                
                    searched[loops] = friends[*gofind]; // 
                    
                    gofind = &friends[*gofind]; // 去找下一個朋友
                    
                } else { // 如果是頭部那個
                    
                    break;
                }
                
                loops += 1;
            }
            
            circles += 1;
            
        }
        
    }
    
    printf("%d", circles);
}

int ainb(int a, int *b, int length) {
    
    for (int x = 0; x < length; x += 1) {
        
        if (b[x] == a) {
            
            return 1;
        }
        
    }
    
    return 0;
}

int find(int x, int y) {

    if (x == y) {

        return y;
    } else {

        return find(x,y);
    }
}

// int zero(int *target, int length) {
    
//     int x;
    
//     for (x = 0; x < length; x += 1) {
        
//         target[x] = 0;
        
//     }
    
//     return x + 1;
// }
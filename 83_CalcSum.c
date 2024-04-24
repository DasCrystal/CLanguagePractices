#include <stdio.h>

/*
#sum
#while

*/

int main() {

    int num, total=0;

    while (1==1) {
        
        printf("total += ");
        scanf("%d", &num);
        
        if (num != 0) {
            total += num;
        } else {
            break;
        }
    }

    printf("Total is %d.\n", total);
}
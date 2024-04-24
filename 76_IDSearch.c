#include <stdio.h>

/*
#switch
#order

*/

int main() {
    int order;

    printf("order = ");
    scanf("%d", &order);
    
    switch (order) {
        case 2:
            // John
            printf("John");
            break;
        case 13:
            // Mary
            printf("Mary");
            break;
        case 16:
            // Amy
            printf("Amy");
            break;
        default:
            printf("Not found.");
    }

    printf("\n");
    return 0;
}
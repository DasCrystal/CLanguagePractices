#include <stdio.h>
#include <windows.h>

signed int search(int length, const int *target, int order);

int main() {
    
    int a[20]={1,2,4,5,8,9,11,14,15,16,18,19,20,22,23,25,29,31,33,34}, result, order;
    
    scanf("%d", &order);
    
    result = search(20, a, order);
    
    if (result == -1) {
        
        printf("%d號不在名單內", order);
        
    } else { // (result == other)
        
        printf("%d號的報名序號是%d", order, result);
        
    }
    
    
    return 0;
}

signed int search(int length, const int *target, int order) { // return : -1 == not found, others is founded.

    int head = 0, tail = length, result = -1; // head > tail

    int x;
    while (head <= tail) {

        x = head + (tail - head) / 2;

        if (target[x] > order) { // 向左

            tail = x - 1;

        } else if (target[x] < order) {
 
            head = x + 1;

        } else {

            result = x;
            break;
        }

    }

    return result;

}
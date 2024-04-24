#include <stdio.h>

void BubbleSort(int len, int *target, int progress);

int main() {
    
    int a[5]={4,3,5,1,2};

    BubbleSort(5, a, 1);

    printf("排序好的陣列為\n");
    for (int x = 0; x < 5; x += 1) {

        printf("%d ", a[x]);

    }
    printf("\n");

    return 0;
}


void BubbleSort(int len, int *target, int progress) {

    int sorted = 0;

    for (int y = 0; y < len; y += 1) {

        if (sorted == 2) {
    
            break;
        } else {
    
            sorted = 2;
            
        }
        
        if (progress == 1) { // 印出目前陣列內容

            for (int x = 0; x < len; x += 1) {

                printf("%d ", target[x]);

            }
            printf("\n");

        } // else do nothing

        for (int x = 1; x < len; x += 1) { // 比較剩下的元素

            if (target[x-1] > target[x]) {

                int ex = target[x-1];
                    target[x-1] = target[x];
                    target[x] = ex;
                
                sorted = 1;

            }

        }

    }

    // if (progress == 1) {

    //     for (int x = 0; x < 5; x += 1) {

    //         printf("%d ", target[x]);

    //     }
    //     printf("\n");

    // } // else do nothing

    // return nothing
}


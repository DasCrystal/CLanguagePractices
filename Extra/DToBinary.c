#include <stdio.h>
#include <stdlib.h>

/*

#malloc
#sizeof
#realloc

《關於記憶體位址的手動指派》
    malloc跟realloc的size單位是「位元組」，所以
    在使用malloc與realloc時，應該利用sizeof()運算子
    來準確的指定該段記憶體空間的大小，而不是直接指定一個整數。
    直接指定一個整數會導致實際指定的記憶體空間大小小於預期的記憶體空間大小，
    從而造成要讀取的資料的地址超出該段記憶體空間這種未定義行為。
    (因為沒有乘上該種資料類型的大小，導致記憶體空間太小)
    
    指定一個只有一個元素的陣列：
    int *array = malloc(1)             // X
    int *array = malloc(sizeof(int)*1) // O
*/

int main() {

    int order;
    int *binary = malloc(sizeof(int)*1);
    binary[0] = 1;

    printf("order = ");
    scanf("%d", &order);

    for (int x = 0; order > 0; x += 1) {

        binary = realloc(binary, sizeof(int)*(binary[0]+1));
        binary[0] += 1;

        binary[binary[0]-1] = order % 2;
        order /= 2;

    }

    for (int x = binary[0] - 1; x > 0; x -= 1) {

        printf("%d", binary[x]);

    }

    printf("\n");

    return 0;
}
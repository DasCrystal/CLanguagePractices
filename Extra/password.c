#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 0;
    char *password = malloc(sizeof(char)*1);
    password[0] = 1; 
    // password[0] = 「陣列」長度(包含[0])
    // 字串長度 = password[0] - 1
    // 有效字元個數(不包含'\0') = password[0] - 2

    printf("Password:");
    while (1) { // scanf

        // 加1格(字節)記憶體空間
        password = realloc(password, sizeof(char)*(password[0]+1));
        password[0] += 1;

        // 將這輪得到的字元存入最後面(新加進來的)的那格
        char cha; scanf("%c",&cha);
        password[password[0]-1] = cha;

        // 當這輪字元是'\n'的時候收尾
        if (cha == '\n') {

            password[password[0]-1] = '\0';

            break;
        }

    }

    int len = password[0] - 2;

    // printf("[%d]",len);
    
    if (len <= 7) {

        printf("Too short.");

    } else {

        printf("Long enough.");

    }

    printf("\n");

    return 0;
}
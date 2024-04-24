#include <stdio.h>

/*
#speedwrite
#work
#char
#function
#array
#pointer
*/

int draw(int y, int x, char *data);

int main()  {

    draw(5, 5, "2222");

}

int draw(int y, int x, char *data) {

    int  UsedInk = 0, Offset = 0;
    char Ink[2] = {'0','1'};

    while (data[Offset] != '\0') {

        // 根據Data的資料印出圖形
        
        for (int loop = 0; loop < (int)(data[Offset]) - 48; loop += 1) {

            if (Offset % 2 == 0) {
    
                printf("%c", Ink[0]);
                UsedInk += 1;
                
            } else {
    
                printf("%c", Ink[1]);
                UsedInk += 1;
    
            }

            if (UsedInk % x == 0) {

                printf("\n");

            }
        
        }
        
        Offset += 1;

    }

    while (UsedInk != y * x) {

        // 填滿Data未指定的區域
        printf("0");
        UsedInk += 1;

        if (UsedInk % x == 0) {

            printf("\n");
        }

    }
    

}
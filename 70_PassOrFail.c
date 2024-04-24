#include <stdio.h>

/*
#ifelse

「條件越容易成立，離if述句開頭越近」
這麼做可以節省效能，少判斷幾次。
*/

int main() {
    int grade;
    printf("grade = ");
    scanf("%d", &grade);

    if (grade > 100) {
        printf("INVAILD\n");
    } else if (grade >= 60) {
        printf("PASSED\n");
    } else if (grade <= 60){
        printf("FAILED\n");
    } else {
        printf("INVAILD\n");
    }
    
    return 0;
}
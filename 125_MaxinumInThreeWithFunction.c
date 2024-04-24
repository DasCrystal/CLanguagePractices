#include <stdio.h>

/*
#function
#maxinum
*/

int max2(int num1, int num2);
int max3(int num1, int num2, int num3);

int main() {

    int num1, num2, num3, max;

    printf("num1,num2,num3 = ");
    scanf("%d,%d,%d", &num1, &num2, &num3);

    max = max3(num1, num2, num3);

    printf("Maxinum number is %d.\n", max);

    return 0;
}

int max2(int num1, int num2) {

    if (num1 > num2) {

        return num1;

    } else { // (num2 > num1)

        return num2;
    }

}

int max3(int num1, int num2, int num3) {

    return max2(max2(num1, num2),num3);

}
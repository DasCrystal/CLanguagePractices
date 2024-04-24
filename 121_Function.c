#include <stdio.h>

/*
#function
*/

double plus(double x);

double reduce(double x);

double multiply(double x);

double divide(double x);

int main() {

    int num = 10;

    num = plus(num) + (divide(num) + multiply(num)); // 20 + (1 + 100)

    printf("[%d]\n", num);

    return 0;

}
double plus(double x) {

    return x + x;

}

double reduce(double x) {

    return x - x;

}

double multiply(double x) {

    return x * x;

}

double divide(double x) {

    return x / x;

}

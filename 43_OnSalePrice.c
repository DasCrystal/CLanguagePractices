#include <stdio.h>

int main() {
    double people, price;
    double SinglePersonPrice = 300;
    double Sill              = 3000;

    printf("How many people:");
    scanf("%lf", &people);

    price = people * SinglePersonPrice;

    if (price < Sill) {  // 不打折
        price *= 1;
    }
    
    if (price >= Sill) { // 滿3000打八折
        price *= 0.8;
    }

    int result = price + 0.5; //四捨五入

    printf(">$%d\n", result);
    return 0;
}
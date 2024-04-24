#include <stdio.h>

int main() {
    
    double a, b, area;
    
    printf("a,b = ");
    scanf("%lf,%lf", &a, &b);
    
    area = (a * b) / 2;
    
    printf("%g", area);
    
    return 0;
}
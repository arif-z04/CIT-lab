#include <stdio.h>

int main()
{
    double a, b;
    printf("Enter first number: "); scanf("%lf", &a);
    printf("Enter second number: "); scanf("%lf", &b);

    if(b != 0){
        double q = a / b;
        printf("Quotient: %.2lf", q);
    }

    return 0;
}
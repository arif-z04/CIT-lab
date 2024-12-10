#include <stdio.h>
#include <math.h>

int main()
{
    double p, r, time;

    printf("Enter the principal(P): "); scanf("%lf", &p);
    printf("Enter the Annual rate of Interest(r): "); scanf("%lf", &r);
    printf("Enter the time(T): "); scanf("%lf", &time);
    
    double rate = 1 + r / 100;
    double a = p * pow(rate, time);

    printf("Compounded Interest: %.2lf\n", a);
    
    return 0;
}
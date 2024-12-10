// Simple interest  I = Pnr


#include <stdio.h> 

int main(){
    double p, r, time;

    printf("Enter the principal(P): "); scanf("%lf", &p);
    printf("Enter the rate of Interest(R): "); scanf("%lf", &r);
    printf("Enter the time(T): "); scanf("%lf", &time);

    double simpleInterest = (p * r * time) / 100;

    printf("Simple Interest: %.2lf", simpleInterest);

    return 0;
}
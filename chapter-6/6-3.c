#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

typedef long long int ll;
typedef long double lld;

ll factorial(int num){
    ll fact = 1;
    for(int i = 1; i <= num; i++){
        fact*=i;
    }

    return fact;
}

lld computeExponent(double x, int terms){
    lld sum = 1.0;
    lld term;


    for(int i = 1; i < terms; i++){
        term = (pow(x, i))/factorial(i);
        sum += term;
    }

    return sum;
}

int main(){
    double x;
    int terms;

    scanf("%lf", &x);
    scanf("%d", &terms);

    lld result = computeExponent(x, terms);

    printf("Estimated value of e^%.2f using %d terms: %Lf\n", x, terms, result);
    
}
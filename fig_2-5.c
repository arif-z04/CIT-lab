#include <stdio.h>

#define PERIOD 10
#define PRINCIPAL 5000

int main(){
    int year;
    float amount, value, inrate;

    amount = PRINCIPAL;
    inrate = 0.11;
    year = 0;

    printf("Year\t Amount\n");
    while(year <= PERIOD){
        printf("%2d\t%8.2f\n", year, amount);
        value = amount + inrate * amount;
        year++;
        amount = value;
    }
}
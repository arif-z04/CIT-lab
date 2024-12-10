#include <stdio.h>

typedef double Prices;
int main(){
    
    
    Prices Rice, Sugar;

    printf("Enter the price for Rice: ");
    scanf("%lf", &Rice);

    printf("Enter the price for Sugar: ");
    scanf("%lf", &Sugar);

    printf("\n*** LIST OF ITEMS ***\n");

    printf("Item\tPrice\n");
    printf("Rice\tRs %.2lf\n", Rice);
    printf("Sugar\tRs %.2lf\n", Sugar);


    return 0;
}
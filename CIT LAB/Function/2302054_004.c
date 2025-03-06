#include <stdio.h>

int isEven(int n){
    return n % 2 == 0;
}

int main(){
    int n;
    printf("Input a number: ");
    scanf("%d", &n);

    isEven(n)?
    printf("The entered number is Even"):
    printf("The entered number is Odd.");

    return 0;
}
#include <stdio.h>

int main(){
    char address[100];
    printf("Enter your address: ");
    scanf("%[^\n]", address);
    printf("Your address is: %s\n", address);
    return 0;
}
#include <stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int sum = (n*(n+1)) * 2;
    
    printf("Sum of first %d natural numbers: %d.", n, sum);
    return 0;

}
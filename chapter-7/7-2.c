#include <stdio.h>

int main(){
    long long int n;
    printf("Enter a number: ");
    scanf("%lld", &n);

    int sum = 0;
    while(n > 0){
        int digits = n % 10;
        sum += digits;
        n /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
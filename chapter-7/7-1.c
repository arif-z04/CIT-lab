#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int reversed = 0;
    while(n > 0){
        int digits = n % 10;
        reversed = reversed * 10 + digits;
        n /= 10;
    }
    printf("%d", reversed);
    return 0;
}
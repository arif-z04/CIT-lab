#include <stdio.h>

typedef long long int i64;
typedef unsigned long long int ui64;

ui64 square(i64 n){
    return n * n;
}

int main(){
    i64 n;
    printf("Enter a number: ");
    scanf("%lld", &n);

    printf("Square of %lld is: %llu", n, square(n));

    return 0;
}
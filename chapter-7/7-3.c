#include <stdio.h>

typedef unsigned long long int ui64;

int main()
{

    ui64 n;
    printf("Enter a number: ");
    scanf("%llu", &n);

    ui64 a = 1, b = 1, next;

    printf("Fibonacci Series: ");
    
    for (ui64 i = 0; i < n; i++)
    {
        printf("%llu ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    
    return 0;
}
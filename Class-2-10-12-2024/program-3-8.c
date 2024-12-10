#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int square = n * n;

    printf("Square of %d is: %d\n", n, square);
    return 0;
}
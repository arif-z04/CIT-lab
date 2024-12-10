#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter num1: ");scanf("%d", &a);
    printf("Enter num2: ");scanf("%d", &b);
    printf("Enter num3: ");scanf("%d", &c);
    int sum = a + b + c;
    int average = sum / 3;

    printf("Average: %d\n", average);
    return 0;
}
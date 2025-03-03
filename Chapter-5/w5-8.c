#include <stdio.h>
int main()
{
    float number;   

    printf("Enter a number: ");
    scanf("%f", &number);
    printf("%*.*f", 8, 2, number); //
    printf("%8.2f", number); //
    

    return 0;
}
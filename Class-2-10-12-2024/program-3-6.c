#include <stdio.h>
#define PI 3.14159
int main()
{
    float r;
    scanf("%f", &r);

    float area = PI * r * r;
    
    printf("Area of Circle of %.2f cm radius: %.2f sq.cm\n", r, area);
    return 0;
}
//Write a program to find the area of a circle of a given radius.

#include <stdio.h>
#define PI 3.14159

int main()
{
    int radius;
    scanf("%d", &radius);
    double area = PI * radius * radius;

    printf("Area: %.2lf\n", area);

    return 0;
}
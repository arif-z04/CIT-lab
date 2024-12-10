#include <stdio.h>

int main(){
    int x, y;
    short int z;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    z = x + y;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);

    // output: 
    // Enter x: 123456
    // Enter y: 123456
    // x: 123456
    // y: 123456
    // z: -15232
}
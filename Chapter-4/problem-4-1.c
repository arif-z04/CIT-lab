#include <stdio.h>

int main(){
    float number;
    printf("Enter float number: ");
    scanf("%f", &number);
    int rightMostNumber = (int)number % 10;
    printf("Right most number: %d\n", rightMostNumber);
    return 0;
}
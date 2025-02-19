#include <stdio.h>

int main(){
    float number;
    printf("Enter float number: ");
    scanf("%f", &number);
    int twoDigits = (int)number % 100;
    printf("Right two-most digits: %d\n", twoDigits);

    return 0;
}
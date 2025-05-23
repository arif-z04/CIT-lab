#include <stdio.h>

int main() {
    char name[20];
    int units;
    float charge, total;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    

    printf("Name: %s\n", name);
    printf("Units consumed: %d\n", units);
    printf("Charge: %.2f\n", charge);
    printf("Total: %.2f\n", total);

    return 0;
}
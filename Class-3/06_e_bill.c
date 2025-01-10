#include <stdio.h>

int main()
{
    float charges[] = {1.5, 1.75, 1.90, 2.00, 2.10};
    float unit, bill;
    int index;
    printf("Enter Unit: ");
    scanf("%f", &unit);
    if (unit < 100)
        index = 0;
    else if (unit < 300)
        index = 1;
    else if (unit < 500)
        index = 2;
    else if (unit < 800)
        index = 3;
    else
        index = 4;

    bill = charges[index] * unit;

    if (bill > 1000)
        bill += 0.1 * bill;

    if (bill < 100)
        bill = 100;

    printf("Your bill: %.2f\n", bill);
    return 0;
}

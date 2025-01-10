#include <stdio.h>

int main()
{
    int month_number;

    int days_in_month[12] =
        {
            31, 28, 31, 30,
            31, 30, 31, 31,
            30, 31, 30, 31
        };

    printf("Enter month number: ");
    scanf("%d", &month_number);

    printf("It has %d days.\n", days_in_month[month_number + 1]);

    return 0;
}
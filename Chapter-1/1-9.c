#include <stdio.h>

int isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void calculateAge(int birth_day, int birth_month, int birth_year,
                  int curr_day, int curr_month, int curr_year)
{
    int daysInMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(curr_year))
    {
        daysInMonths[1] = 29;
    }

    if (birth_day > curr_day)
    {
        curr_day += daysInMonths[(curr_month - 2 + 12) % 12]; 
        curr_month -= 1; 
    }

    if (birth_month > curr_month) // true
    {
        curr_month += 12; // curr_month = 2 + 12 = 14
        curr_year -= 1; // curr_year = 2025 - 1 = 2024
    }

    int age_days = curr_day - birth_day; // 15 - 4 = 11
    int age_months = curr_month - birth_month; // 14 - 5 = 9
    int age_years = curr_year - birth_year; // 2024 - 2003 = 21

    printf("Age: %d years, %d months, %d days\n", age_years, age_months, age_days);
}

int main() {
    int birth_day, birth_month, birth_year;
    int curr_day, curr_month, curr_year;

    printf("Enter birth date (DD MM YYYY): ");
    scanf("%d %d %d", &birth_day, &birth_month, &birth_year);

    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &curr_day, &curr_month, &curr_year);

    calculateAge(birth_day, birth_month, birth_year, curr_day, curr_month, curr_year);

    return 0;
}
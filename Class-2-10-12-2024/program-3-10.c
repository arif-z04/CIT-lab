#include <stdio.h>

int main(){
    int days, years, weeks;
    printf("Enter Days: ");
    scanf("%d", &days);
    
    years = days / 365;
    days %= 365;
    weeks = days / 7;
    days %= 7;
    
    printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, days);

    return 0;
}
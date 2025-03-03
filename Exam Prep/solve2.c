#include <stdio.h>

int isLeapYear(int year){
    return ((year % 400 == 0)||(year%4==0 && year%100 != 0));
}

int main(){

    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if(isLeapYear(year)){
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is NOT a Leap Year.\n", year);
    }
    return 0;
}
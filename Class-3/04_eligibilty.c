#include <stdio.h>

int main()
{
    int phy, chem, math, total;

    printf("Enter marks in Math: ");
    scanf("%d", &math);
    printf("Enter marks in Physics: ");
    scanf("%d", &phy);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chem);

    total = phy + math + chem;
    
    if(math >= 60 && phy >= 55 && chem >= 45){
        if(total >= 155 || phy + math >= 100){
            printf("Eligible.");
        } 
    } else {
        printf("Not eligible.");
    }
    return 0;
}
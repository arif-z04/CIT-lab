#include <stdio.h>

int main()
{
    int sum = 0, n, i = 1;

    printf("Enter N: ");
    scanf("%d",&n);

    while(i<=n){
        
        sum = sum + i;
        i++;
    }
    
    printf("SUM of N natural numbers: %d\n", sum);
    
    return 0;
}
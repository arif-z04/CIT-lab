#include <stdio.h>

int main()
{
    int n = 0; 
    scanf("%d", &n);
    
    int i = 1, sum = 0;
    
    while(i<=n){

        if(i % 2 == 0){
            sum = sum + i;
        }
        i++;
    }

    printf("SUM of even numbmers: %d\n", sum);
    
    return 0;
}
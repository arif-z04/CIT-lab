#include <stdio.h>

int main(){
    int n;

    printf("Enter the number of N: ");
    scanf("%d", &n);
    
    float sum = 0.0;
    
    for(int i = 1; i<=n; i++){
        sum += 1/(float)i;
    }

    printf("Sum: %f", sum);

    return 0;
}
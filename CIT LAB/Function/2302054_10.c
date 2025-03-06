#include <stdio.h>

int checkPerfect(int n){
    int sum = 0;

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum+=i;
        }
    }

    return sum == n;
}
int main(){
    int lst, hst;

    printf("Input lowest search limit of perfect numbers: ");
    scanf("%d", &lst);
    
    printf("Input highest search limit of perfect numbers: ");
    scanf("%d", &hst);
    
    printf("The perfect numbers between %d to %d are: \n", lst, hst);

    for(int i = lst; i <= hst; i++){
        if(checkPerfect(i)){
            printf("%d ", i);
        }
    }

    return 0;
}
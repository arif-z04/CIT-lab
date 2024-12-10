#include <stdio.h>

int main(){
    int n;
    int flag = 1;
    int pos=0, neg=0;
    while(flag){
        printf("Enter the number: ");
        scanf("%d", &n);
        if(n == 0){
            flag = 0;
        }
        if(n > 0) pos++;
        if(n < 0) neg++;
    }

    printf("Positive numbers count: %d\n", pos);
    printf("Negative numbers count: %d\n", neg);

}
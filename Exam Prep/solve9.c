#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1, next;
    for(int i = 0; i < n; i++){
        printf("%d ", a);
    }
    return 0;
}
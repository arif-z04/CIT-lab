#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a, b;
    
    printf("Input 1st number: "); scanf("%d", &a);
    printf("Input 2nd number: "); scanf("%d", &b);

    printf("Before swapping: n1: %d n2: %d\n", a, b); 
    swap(&a, &b);
    printf("After swapping: n1: %d n2: %d\n", a, b);
    
    return 0;
}
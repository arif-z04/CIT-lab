#include <stdio.h>

int gcd(int a, int b){

    if(b > a) return gcd(b, a);

    while(b!=0){  
        int temp = b;
        b = a % b;
        a = temp;   
    }

    return a;
}

int main(){
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("GCD of %d & %d: %d\n",n1, n2, gcd(n1, n2));
    return 0;
}
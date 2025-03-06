#include <stdio.h>

int fact(int n){
    int num = 0, f = 1;
    while(num < n - 1){
        f = f + f * num;
        num++;
    }

    return f;
}

int main(){
    int sum;
    sum = fact(1)/1 + fact(2)/2 + fact(3)/3 + fact(4)/4 + fact(5)/5; 
    printf("1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 = %d\n", sum);
    
    return 0;
}
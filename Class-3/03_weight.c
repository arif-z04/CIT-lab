#include <stdio.h>

int main(){

    int weight;
    scanf("%d", &weight);

    if(weight > 150 && weight < 170){
        printf("Normal.\n");
    } else if (weight <= 150){
        printf("Underweight.\n");
    } else {
        printf("Overweight.\n");
    }

    return 0;
}
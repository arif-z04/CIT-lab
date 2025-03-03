#include <stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(int i = 1; i <= rows; i++){

        int start = (i%2==1)?1:0;
        
        for(int j = 1; j <= i; j++){
            printf("%d", start);
            start = 1 - start;
        }
        printf("\n");
    }

    return  0;
}
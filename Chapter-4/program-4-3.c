#include <stdio.h>
#include <string.h>

int main(){
    char number[100];
    scanf("%s", number);

    int length = strlen(number);

    for(int i = 0; i < length; i++){
        for(int j = i; j <= length; j++){
            printf("%c ", number[j]);
        }
        printf("\n");
    }
    
    return 0;
}
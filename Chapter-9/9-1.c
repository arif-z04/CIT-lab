#include <stdio.h>
#include <string.h>


int main(){

    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);


    for(int i = 0; i < strlen(name); i++){
        if(name[i] == ' '){
            printf("[%d] ", name[i]);
            continue;
        }

        printf("%d ", name[i]);
    }


    return 0;
}
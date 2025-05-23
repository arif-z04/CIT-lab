#include <stdio.h>

int main(){
    char ch;
    printf("Enter text: \n");
    int sub = 0;
    while((ch = getchar()) != '#'){
        if(ch == '.'){
            printf("!");
            sub++;
            continue;
        } 
        if(ch == '!'){
            printf("!!");
            sub++;
            continue;
        }
        printf("%c", ch);
    }
    printf("Substitution made: %d times.\n", sub);
    return 0;
}
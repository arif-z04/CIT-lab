#include <stdio.h>
#include <string.h>

void sortStr(char str[]){
    int len = strlen(str);
    char temp;

    for(int i = 0; i < len - 1; i++){
        for(int j = i + 1; j < len; j++){
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    
}

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    //remove newline char '\n' replace with '\0'
    str[strcspn(str, "\n")] = '\0';

    sortStr(str);
    printf("Sorted string: %s", str);

    return 0;
}
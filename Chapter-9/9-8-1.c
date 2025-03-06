#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseStr(char *str){
    int length = strlen(str);

    for(int i = 0; i < length/2; i++){
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int isPalindrome(const char *str){
    char copy[100];
    strcpy(copy, str);

    for (int i = 0; copy[i]; i++) {
        copy[i] = tolower(copy[i]);
    }
    reverseStr(copy);

    for (int i = 0; str[i]; i++) {
        if (tolower(str[i]) != copy[i]) {
            return 0; // Not a palindrome
        }
    }

    return 1;
}

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if(isPalindrome(str)){
        printf("\'%s\' is a palindrome.", str);
    } else {
        printf("\'%s\' is not a palindrome.", str);
    }
    
}
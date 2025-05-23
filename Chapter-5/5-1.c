#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    // checks for newline character and replaces it with null character

    char w1[20];

    strncpy(w1, str, 4);
    // the first 4 characters of the string are copied to the variable w1

    
    // strncpy(w1, str, 4); is equivalent to the following code

    // for(int i = 0; i < 4; i++){
    //     w1[i] = str[i];
    // }

    // strncpy copies the first n characters of the string to the variable
    w1[4] = '0';
    
    strncpy(w1 + 5, str+4, 10);
    // is equivalent to the following code

    for(int i = 0; i < 10; i++){
        w1[i+5] = str[i+4];
    }

    // the next 10 characters of the string are copied to 
    // the variable w1 starting from the 5th index


    w1[15] = '\0';

    printf("(a) : %s\n", w1);
    return 0;

}



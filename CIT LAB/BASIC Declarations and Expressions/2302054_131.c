// Check if a string is present in the last part in the last part of another string



#include <stdio.h>
#include <string.h>


int main(){
    int num1_len, num2_len;
    char num1[100], num2[100];  

    printf("Enter the first string:\n");
    fgets(num1, sizeof(num1), stdin);
    printf("Enter the second string:\n");
    fgets(num2, sizeof(num2), stdin);

    num1_len = strlen(num1);
    num2_len = strlen(num2);


    if (num1_len == num2_len){
        if (strcmp(num1, num2) == 0){
            printf("The strings are equal\n");
        } else {
            printf("The strings are not equal\n");
        }
    } else {
        printf("The strings are not equal\n");
    }

    return 0;
}
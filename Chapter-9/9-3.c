#include <stdio.h>
#include <string.h>


void substr(char str[], int start, int length){
    char substring[100];
    int i;
    if(start < 0 || start >= strlen(str)){
        printf("Invalid starting position!");
        return;
    }

    for(i = 0; i < length && str[start + i] != '\0'; i++){
        substring[i] = str[start+i];
    }

    substring[i] = '\0';

    printf("Extracted substring: %s\n", substring);
}

int main(){
    char str[100];
    int n, m;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter starting position (0-based index): ");
    scanf("%d", &n);
    printf("Enter number of characters to extract: ");
    scanf("%d", &m);

    substr(str, n, m);

    return 0;
}
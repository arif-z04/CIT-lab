#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TEXT 1000
#define MAX_WORD 50

void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int isWordBoundary(char c){
    return !isalnum(c);
}

int main(){
    char text[MAX_TEXT], word[MAX_WORD];

    int count = 0;
    char *pos;

    printf("Enter text: ");
    fgets(text, MAX_TEXT, stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("Enter word to count: ");
    scanf("%s", word);

    pos = text;

    toLowerCase(text);
    toLowerCase(word);

    while((pos=strstr(pos, word))!=NULL){
        int isStartBoundary = (pos==text || isWordBoundary(*(pos-1)));
        int isEndBoundary = (pos + strlen(word) == text + strlen(text) || isWordBoundary(*(pos+strlen(word))));
        
        if(isStartBoundary && isEndBoundary){
            count++;
        }
        pos+=strlen(word);
    }
    printf("The word '%s' appears %d times in the text.\n", word, count);

    return 0;
}
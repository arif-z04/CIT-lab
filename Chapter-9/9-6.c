#include <stdio.h>
#include <string.h>

void replaceWord(char *str, const char *oldWord, const char *newWord) {
    char buffer[1000];
    int i, j = 0, oldWordLen, newWordLen;

    oldWordLen = strlen(oldWord);
    newWordLen = strlen(newWord);
    
    for (i = 0; str[i] != '\0';) {
        if (strstr(&str[i], oldWord) == &str[i]) {
            strcpy(&buffer[j], newWord);
            j += newWordLen;
            i += oldWordLen;
        } else {
            buffer[j++] = str[i++];
        }
    }
    
    buffer[j] = '\0';
    strcpy(str, buffer);
}

int main() {
    char str[] = "It is good to program in PASCAL language.";
    const char oldWord[] = "PASCAL";
    const char newWord[] = "C";
    printf("Original string: %s\n", str);
    replaceWord(str, oldWord, newWord);
    printf("Modified string: %s\n", str);
    
    return 0;
}
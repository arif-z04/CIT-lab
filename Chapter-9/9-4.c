#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TEXT 1000
#define MAX_WORD 50

void toLowerCase(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
}

int countOccurrences(char text[], char word[])
{
    int count = 0;
    char *pos = text;
    int wordLen = strlen(word);

    while ((pos = strstr(pos, word)) != NULL)
    {
        if ((pos == text || !isalnum(*(pos - 1))) && !isalnum(*(pos + wordLen)))
        {
            count++;
        }
        pos += wordLen;
    }

    return count;
}

int main()
{
    char text[MAX_TEXT], word[MAX_WORD];

    printf("Enter text: ");
    fgets(text, MAX_TEXT, stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("Enter word to count: ");
    scanf("%s", word);

    toLowerCase(text);
    toLowerCase(word);

    int occurrences = countOccurrences(text, word);

    printf("The word '%s' appears %d times in the text.\n", word, occurrences);

    return 0;
}

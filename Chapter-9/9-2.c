#include <stdio.h>
#include <string.h>

int main()
{
    char inventor[] = "Dennis Ritchie";
    char str1[100];

    int attempt = 0;

    printf("Who is the inventor of C?\n");
    while (attempt <= 3)
    {
        printf("Answer: ");
        fgets(str1, sizeof(str1), stdin);

        if (strcmp(str1, inventor) == 0)
        {
            printf("Good!\n");
        }
        else
        {
            printf("Try again.\n");
            attempt++;
        }
    }
    return 0;
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(const char *str)
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        if (tolower(str[left]) != tolower(str[right]))
        {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str))
    {
        printf("\'%s\' is a palindrome.\n", str);
    }
    else
    {
        printf("\'%s\' is not a palindrome.\n", str);
    }

    return 0;
}
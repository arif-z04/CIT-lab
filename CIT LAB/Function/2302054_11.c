#include <stdio.h>
#include <string.h>

#define NUM_LETTERS 26
int arAnagrams(const char *str1, const char *str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2){
        return 0;
    }

    int count1[NUM_LETTERS] = {0};
    int count2[NUM_LETTERS] = {0};

    for(int i = 0; i < len1; i++){
        count1[str1[i] - 'a']++;
    }

    for(int i = 0; i < len2; i++){
        count2[str2[i] - 'a']++;
    }
    
    for(int i = 0; i < NUM_LETTERS; i++){
        if(count1[i] != count2[i]){
            return 0;
        }
    }

    return 1;
}
int main(){
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    if(arAnagrams(str1, str2)){
        printf("'%s' and '%s' are anagrams!\n", str1, str2);
    } else {
        printf("'%s' and '%s' are not anagrams.\n", str1, str2);
    }
}
#include <stdio.h>
#include <ctype.h>

int main(){
    char name;
    printf("Enter a ch: ");
    int val = scanf("%c", &name);
    printf("char: %c\n", name);-
    printf("val: %d\n", val);
    return 0;
}
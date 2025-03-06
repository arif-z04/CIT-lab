#include <stdio.h>
#include <stdlib.h>

char *decToBin(int dec){
    if(dec == 0){
        char *binary = (char*)malloc(2 * sizeof(char));
        if(binary==NULL){
            printf("Memory allocation failed!");
            exit(1);
        }
        binary[0] = '0';
        binary[1] = '\0';
        return binary;
    }

    int numBits = 0;
    int temp = dec;

    while(temp > 0){
        temp /= 2;
        numBits++;
    }

    char* binary = (char*)malloc((numBits + 1) * sizeof(char));
    if (binary == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    int i = numBits - 1;
    while(dec > 0){
        binary[i] = (dec % 2) + '0';
        dec /= 2;
        i--;
    }

    binary[numBits] = '\0';
    return binary;
}

int main(){
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    char *binary = decToBin(decimal);
    printf("Binary: %s\n", binary);

    free(binary);
    return 0;
}
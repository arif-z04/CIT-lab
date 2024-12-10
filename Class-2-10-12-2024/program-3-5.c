#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef char Item;
typedef int Prices;

int main() {
    Item name[2][50]; 
    Prices item[2];

    for (int i = 0; i < 2; i++) {
        printf("Item name: ");
        fgets(name[i], sizeof(name[i]), stdin);

        name[i][strcspn(name[i], "\n")] = '\0';

        printf("Prices: ");
        scanf("%d", &item[i]);
        while (getchar() != '\n');  
    }

    printf("\n***LIST OF PRICES***\n");
    printf("Item\tPrices\n");
    
    for (int i = 0; i < 2; i++) {
        printf("%s\tRs %d\n", name[i], item[i]);
    }

    return 0;
}

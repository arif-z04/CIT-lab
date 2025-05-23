#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

double random_double(double min, double max){
    return min + (rand() / (double)RAND_MAX) * (max - min);
}

int generate(){
    int n;
    double min, max;
    char FILENAME[100];
    
    printf("Enter File name: "); 
    scanf("%s", FILENAME);
    printf("Number count: "); scanf("%d", &n);
    printf("Min: "); scanf("%lf", &min);
    printf("Max: "); scanf("%lf", &max);

    FILE *file = fopen(FILENAME, "w");
    if(file==NULL){
        perror("Error opening file.");
        return 1;
    }

    srand(time(NULL));

    for(int i = 0; i < n; i++){
        double num = random_double(min, max);
        fprintf(file, "%.6lf\n", num);
    }

    fclose(file);
}
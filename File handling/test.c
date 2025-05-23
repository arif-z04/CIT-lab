#include <stdlib.h>
#include <stdio.h>

#define PI 3.141592
#define INPUT_FILE  "input.txt"
#define OUTPUT_FILE  "output.txt"

double calcArea(double r){
    return PI * (r*r);
}

int test(){

    FILE *input, *output;
    double radius, area;

    input = fopen(INPUT_FILE, "r");

    if(input == NULL){
        printf("Error opening %s file.", INPUT_FILE);
        exit(1);
    }

    output = fopen(OUTPUT_FILE, "w");
    if (output == NULL) {
        perror("Error opening output file");
        fclose(input);
        return 1;
    }
    

    while(fscanf(input, "%lf", &radius) == 1){
        if(radius < 0){
            fprintf(output, "Invalid radius: %.2lf\n", radius);
        } else {
            area = calcArea(radius);
            fprintf(output, "%.2lf\n", area);
        }
    }

    fclose(input);
    fclose(output);

    printf("Calculation completed. Results saved in '%s'.\n", OUTPUT_FILE);
    return 0;
}
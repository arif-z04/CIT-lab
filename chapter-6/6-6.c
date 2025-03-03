#include <stdio.h>
#include <math.h>

int main() {
    printf("Square Root Table (0.0 to 9.9)\n\n");

    // Print column headers
    printf("Number |");
    for (int j = 0; j < 10; j++) {
        printf(" %.1f  |", j / 10.0);
    }
    printf("\n");

    // Print separator
    for (int j = 0; j < 80; j++) {
        printf("-");
    }
    printf("\n");

    // Generate table
    for (int i = 0; i < 10; i++) {
        printf(" %.1f   |", (float)i);  // Row label (whole numbers)
        for (int j = 0; j < 10; j++) {
            float num = i + j / 10.0;
            printf(" %.2f |", sqrt(num)); // Square root calculation
        }
        printf("\n");
    }

    return 0;
}

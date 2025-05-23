#include <stdio.h>

int main()
{
    FILE *time, *velocity, *distance;
    int t, v, s;

    // Open files in write mode first to initialize data
    time = fopen("time.txt", "w");
    velocity = fopen("velocity.txt", "w");


    // Error Handling. If something goes wrong it shows error.
    if (time == NULL || velocity == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    // Write time values (0, 2, 4, ..., 18)
    for (int i = 0; i < 20; i += 2) {
        fprintf(time, "%d\n", i);
    }

    // Write velocity values (0, 4, 8, ..., 36)
    for (int i = 0; i < 40; i += 4) {
        fprintf(velocity, "%d\n", i);
    }

    // Close files after writing
    fclose(time);
    fclose(velocity);

    // it will not be saved. so after writing you have to close it.

    // Open files again in read mode to fetch values
    time = fopen("time.txt", "r");
    velocity = fopen("velocity.txt", "r");
    distance = fopen("distance.txt", "w");

    if (time == NULL || velocity == NULL || distance == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    fprintf(distance, "Time(s)\tVelocity(m/s)\tDistance(m)\n");

    // Read time and velocity, compute distance
    while (fscanf(time, "%d", &t) != EOF && fscanf(velocity, "%d", &v) != EOF)
    {
        s = v * t;
        fprintf(distance, "%4d        %4d           %4d\n", t, v, s);
    }

    // Close all files
    fclose(time);
    fclose(velocity);
    fclose(distance);

    printf("Distance calculations saved in distance.txt\n");

    return 1;
}

#include <stdio.h>

int main()
{
    float distance, fuel, mileage;

    printf("Enter the distance travelled: ");
    scanf("%d", &distance);

    printf("Enter the consumed fuel: ");
    scanf("%d", &fuel);

    mileage = distance / fuel;

    printf("Mileage of the Car: %f", mileage);

    return 0;
}    
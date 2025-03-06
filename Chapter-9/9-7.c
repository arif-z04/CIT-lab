#include <stdio.h>
#include <string.h>

struct VehicleSale {
    char vehicleType[20];  
    char monthOfSales[6];  
    int price;       
};

void printVehicleDetails(struct VehicleSale sales[], int num_sales, const char *vehicleType, const char *startMonth, const char *endMonth) {
    printf("\nDetails of %s sold between %s and %s:\n", vehicleType, startMonth, endMonth);
    printf("Vehicle Type\tMonth of Sales\tPrice\n");
    printf("----------------------------------------\n");

    for (int i = 0; i < num_sales; i++) {
        if (strcmp(sales[i].vehicleType, vehicleType) == 0 &&
            strcmp(sales[i].monthOfSales, startMonth) >= 0 &&
            strcmp(sales[i].monthOfSales, endMonth) <= 0) {
            printf("%s\t\t%s\t\t%d\n", sales[i].vehicleType, sales[i].monthOfSales, sales[i].price);
        }
    }
}

int main() {
    struct VehicleSale sales[] = {
        {"MARUTI-800", "02/01", 210000},
        {"MARUTI-DX", "07/01", 265000},
        {"GYPSY", "04/02", 315750},
        {"MARUTI-VAN", "08/02", 240000}
    };

    int num_sales = sizeof(sales)/sizeof(sales[0]);

    char vehicleType[20];
    char startMonth[6];
    char endMonth[6];

    printf("Enter the vehicle type: ");
    scanf("%s", vehicleType);
    printf("Enter the starting month (MM/YY): ");
    scanf("%s", startMonth);
    printf("Enter the ending month (MM/YY): ");
    scanf("%s", endMonth);

    printVehicleDetails(sales, num_sales, vehicleType, startMonth, endMonth);

    return 0;
}
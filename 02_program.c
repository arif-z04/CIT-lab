//Find the roots of a quadratic equation.
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;   
    double D, root1, root2, realNum, imagNum;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }
    D = b * b - 4 * a * c;
    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (D == 0) {
        
        root1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2lf\n", root1);
    } else {
        realNum = -b / (2 * a);
        imagNum = sqrt(-D) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realNum, imagNum);
        printf("Root 2 = %.2lf - %.2lfi\n", realNum, imagNum);
    }
    return 0;
}

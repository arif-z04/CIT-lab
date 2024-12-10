#include <stdio.h>
#include <math.h>

#define MAX 180
#define PI 3.1416

int main(){
    int angle;
    float x, y;
    angle = 0;

    printf("Angle\t\tCos(angle)\n");
    while(angle <= MAX){
        
        x = (PI/MAX)*angle;
        y = cos(x);
        
        printf("%4d\t%15.4f\n", angle, y);
        angle += 10;
    }
}
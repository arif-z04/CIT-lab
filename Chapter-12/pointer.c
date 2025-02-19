#include <stdio.h>

int main()
{
    int *p, sum = 0, i;

    i = 0;
    int x[5] = {5, 9, 3, 6, 7};

    p = x;

    printf("Element value address: \n");

    while(i<5){
        printf("x[%d] %d %u\n", i, *p, p);
        sum = sum + *p;
        i++, p++;
    }

    printf("\n sum   = %d \n", sum);
    printf("\n &x[0] = %u \n", &x[0]);
    printf("\n  p    = %u \n", p);
    printf("\n %d - %d = %d  \n",&x[4], &x[2], &x[4] - &x[2]);

    
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    double nums[] = {35.7, 50.21, -23.73, -46.45};
    
    int size = sizeof(nums)/sizeof(nums[0]);

    for(int i = 0; i < size; i++){
        printf("%d ", (int)round(nums[i]));
    }

    return 0;
}
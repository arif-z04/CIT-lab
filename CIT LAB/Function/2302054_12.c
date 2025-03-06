#include <stdio.h>
#include <stdlib.h>

int maxInArr(int *arr, int length)
{
    int max = -1e8;
    for(int i = 0; i < length; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}
int minInArr(int *arr, int length)
{
    int min = 1e8;
    for(int i = 0; i < length; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;

}

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed! ");
        return 1;
    }
    printf("Enter 5 values: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int length = 5;
    printf("Minimum value is: %d\n", minInArr(arr, length));
    printf("Maximum value is: %d\n", maxInArr(arr, length));


    free(arr);
    return 0;
}
#include <stdio.h>

void sort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;
        
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j+1] = key;
    }
}

void inputArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[3];

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Input 3 integers: ");
    inputArray(arr, size); 

    printf("Original array: ");
    printArray(arr, size);
    sort(arr, size);
    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
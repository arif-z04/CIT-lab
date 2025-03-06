#include <stdio.h>

void input_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}

int find_min(int arr[], int n){
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}


int main(){
    int n;
    printf("Input the array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input the array elements: "); 
    input_array(arr, n);

    int min = find_min(arr, n);
    int pos = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == min){
            pos = i;
            break;
        }
    }
    
    printf("The minimum element is: %d\n", min);
    printf("Position within array: %d\n", pos);

}
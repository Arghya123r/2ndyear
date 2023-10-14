#include <stdio.h>

void swap(int* x, int* y){
    
    int t = *x;
    *x=*y;
    *y = t;
}

int partition(int arr[], int low, int high){
    int pivot = high;
    int i = low -1;
    
    for(int j = low;j<high;j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    
    return (i+1);
    
}

void quicksort(int arr[], int low, int high){
    
    if(low < high){
        
        int pi = partition(arr,low,high);
        
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
        
    }
    
}

int main()
{
        int arr[] = { 10, 7, 8, 9, 1, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    quicksort(arr, 0, N - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    return 0;
}
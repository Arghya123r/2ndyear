#include <stdio.h>
#define MAX 50

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
}

int main(){
    int arr[MAX],n;

    printf("Please enter the number of elements in the array: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("Enter the %dth element: ",(i+1));
        scanf("%d", &arr[i]);
    }

    printf("The initial array is: "); printarray(arr,n);
    insertionSort(arr,n);
    printf("The sorted array is: "); printarray(arr,n);

    return 0;
}
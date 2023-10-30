#include <stdio.h>
#include <stdlib.h>

void heapify(int arr[], int N, int i){
    int largest = i;
    int temp;

    int l = 2*i + 1;
    int r = 2*i + 2;

    if(l<N && arr[l]>arr[largest])
        largest = l;
    if(r<N && arr[r]>arr[largest])
        largest = r;
    
    if(largest != i){
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest]=temp;
        heapify(arr,N,largest);
    }
}

void heapsort(int arr[], int N){
    int temp;
    for(int i = N/2 - 1; i>=0; i--){
        heapify(arr,N,i);
    }
    for(int i = N-1; i>=0;i--){
        temp = arr[i];
        arr[i] = arr[0];
        arr[0]=temp;
        heapify(arr,i,0);
    }
}

void printarray(int arr[], int N){
    for(int i = 0; i<N; i++)
        printf("%d, ", arr[i]);
}

int main()
{
    int arr[50];
    int n,i;
    printf("Please Enter the number of elements in the heap: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        pritnf("Please enter the %dth element: ", (i+1));
        scanf("%d", arr[i]);
    }
    pritnf("The initial array is: ");
    printarray(arr,n);
    heapsort(arr,n);
    printf("The sorted array is: ");
    printarray(arr,n);
    return 0;

}
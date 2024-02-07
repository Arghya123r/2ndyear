#include <stdio.h>
#define MAX 50

void mergearray(int arr[],int l1,int h1,int l2, int h2){
    int temp[MAX];
    int i=l1, j = l2, k = 0;

    while(i<=h1 && j<=h2){
        if(arr[i]<arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while(i<=h1){
        temp[k++] = arr[i++];
    }
    while(j<=h2){
        temp[k++] = arr[j++];
    }

    for(i=l1,j=0;i<=h2;i++,j++)
        arr[i] = temp[j];
}

void mergesort(int arr[], int low, int high){
    int mid;

    if(low < high){
        mid = (low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr, mid+1, high);
        mergearray(arr, low, mid, mid+1, high);
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
    mergesort(arr,0,(n-1));
    printf("The sorted array is: "); printarray(arr,n);

    return 0;
}
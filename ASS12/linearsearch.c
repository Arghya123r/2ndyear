#include <stdio.h>
#define MAX 50

int lsearch(int arr[], int N, int target){
    int i;
    for(i=0;i<N;i++){
        if(arr[i]==target)
            return i;
    }
    return -1;
}

int main(){
    int arr[MAX],n,target;

    printf("Please enter the number of elements in the array: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("Enter the %dth element: ",(i+1));
        scanf("%d", &arr[i]);
    }

    printf("Please enter a element to search: ");
    scanf("%d",target);
    
    int pos = lsearch(arr,n,target);

    if(pos == -1){
        printf("The element is not in the array.");
    }
    else
        printf("The element %d is at %d.",target,pos);
    return 0;

}
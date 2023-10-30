#include <stdio.h>

int bsearch(int arr[],int min, int max, int target){
    while(min<=max){
        int mid = max + (max - min)/2;

        if(arr[mid]==target)
            return mid;
        else if(arr[mid] < target)
            max = mid +1;
        else
            max = mid -1;

    }
    return -1;
}

int main(){
    int arr[50],n,target;

    printf("Please enter the number of elements in the array: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("Enter the %dth element: ",(i+1));
        scanf("%d", &arr[i]);
    }

    printf("Please enter a element to search: ");
    scanf("%d",target);
    
    int pos = bsearch(arr,0,n,target);

    if(pos == -1){
        printf("The element is not in the array.");
    }
    else
        printf("The element %d is at %d.",target,pos);
    return 0;

}
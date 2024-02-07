#include <stdio.h>

int isearch(int arr[], int lo, int hi, int tar){
    int pos;
    if(lo<=hi && lo <= tar && hi >= tar){
        pos = lo + (((double)hi-lo)/(arr[hi]-arr[lo]));
        if(pos == tar)
            return pos;
        else if(arr[pos] < tar)
            isearch(arr,pos+1,hi,tar);
        else
            isearch(arr,lo,pos-1,tar);
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
    
    int pos = isearch(arr,0,n,target);

    if(pos == -1){
        printf("The element is not in the array.");
    }
    else
        printf("The element %d is at %d.",target,pos);
    return 0;

}
#include <stdio.h>

void printarray(int arr[], int len)
{
    int i;
    for(i=0;i<len;i++)
        printf("%d ", arr[i]);
}

void linearsearch(int arr[], int len)
{
    int i,var;
    printf("Enter the element to search for: ");
    scanf("%d", &var);
    for(i=0;i<len;i++){
        if(arr[i]==var)
            break;
    }
    printf("The position of the element %d is at %d",var,i+1);
}

void deletion(int arr[], int len){
    int i,pos;
    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &pos);
    for(i=pos-1;i<len-1;i++){
        arr[i] = arr[i+1];
    }
    len -= 1;
    printarray(arr,len);
}

void insertion(int arr[], int len)
{
    int num,pos,i;
    printf("Enter the element you want to insert: ");
    scanf("%d", &num);
    printf("\nEnter the position you want to insert it: ");
    scanf("%d", &pos);
    for(i=len;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    len += 1;
    arr[pos-1] = num;
    printarray(arr,len);
}

int main()
{
    int arr[50];
    int i,len,n;
    printf("Enter the number of element: ");
    scanf("%d",&len);
    printf("Enter the Elements: ");
    for(i=0;i<len;i++)
        scanf("%d", &arr[i]);
    printf("For searching enter 1, for deletion of an element enter 2, for insertion of element enter 3, enter anything else to exit: ");
    scanf("%d", &n);
    switch(n){
        case 1:
            linearsearch(arr,len);
            break;
        case 2:
            deletion(arr,len);
            break;
        case 3:
            insertion(arr,len);
        default:
            break;
    }
    return 0;
    
    
    
}

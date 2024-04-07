#include <iostream>
#define MAX 50

//work in progreess
// notes 2 calls for odd and evens keep an index
//runtime O(n)

void displayarray(int arr[], int size){
    std::cout<<("The array is: ");
    for(int i=0; i<size; i++){
        std::cout<<arr[i]<<", ";
    }
    std::cout<<std::endl;
}

void mix(int arr1[], int arr2[], int size1, int size2)
{
    int list[MAX];
    int index1 = 0;
    int index2 = (size1+size2)-1;
    int j = 0,k = 0,i;

    for(i = 0; i<size1; i++){
        if(arr1[i]%2==0)
            list[index1++]=arr1[i];
        else
            list[index2--]=arr1[i];
    }
    for(i=0; i<size2; i++){
        if(arr2[i]%2==0)
            list[index1++]=arr2[i];
        else
            list[index2--]=arr2[i];
    }

    displayarray(list,(size1+size2));


}

int main(){
    int arr1[]={3, 2, 1, 7, 6, 3};
    int arr2[]={9, 3, 5, 6, 2, 8, 10};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    mix(arr1,arr2,size1,size2);
    return 0;
}
#include <iostream>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int accept(int list[], int size){
    int n;
    std::cout << ("Enter a value to enter in the: ");
    std::cin >> n;
    list[++size]=n;
    return size;
}

void display(int list[],int size){
    std::cout << ("The array is: ");
    for(int i=0;i<size;i++){
    std::cout << list[i] << ", ";
    }
}

void i_sort(int list[], int size){
    int j;
    for(int i=1; i<size;i++){
        int key = list[i];
        int j=i-1;

    while(j>=0 && list[j]>key){
        list[j+1] = list[j];
            j = j-1;
        }
        list[j+1]=key;
        }
}

void sel_sort(int list[], int size){
    int min_id;
    for(int i=0; i<size; i++){
        min_id=i;
        for(int j=i+1;j<size;j++){
            if(list[min_id]>list[j])
                min_id = j;
            }

            if(min_id != i){
                swap(&list[i],&list[min_id]);
            }
        }
}

void bub_sort(int list[], int size){
    bool swapped;
    for(int i=0; i<size-1;i++){
        swapped = false;
        for(int j=0;j<size-i-1;j++){
            if(list[j]> list[j+1]){
                swap(&list[j],&list[j+1]);
                swapped = true;
            }
        }

        }
}
int main()
{
    int n;
    int arr[50]={10,29,12,34,56,67,34,56,78,69};
    int size = 10;
    display(arr,size);
    while(true){
        std::cout<<("Enter 1 to insert a value, 2 to display the array,\n sort the array using 3(insertion sort), 4(selection sort), 5(bubble sort), and 6 to exit: ");
        std::cin>>n;
        switch(n){
            case(1):
                size=accept(arr,size);
                continue;
            case(2):
                display(arr,size);
            case(3):
                i_sort(arr,size);
            case(4):
                sel_sort(arr,size);
            case(5):
                bub_sort(arr,size);
            case(6):
                std::cout<<("Exiting...");
                break;
            default:
                std::cout<<("Invalid Input, Please try again.");
                continue;
        }
    }

}
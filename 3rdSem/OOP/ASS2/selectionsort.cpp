#include<iostream>

using namespace std;

void selectionsort(int arr[], int n){

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void display(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

					
int main(){
	int n;
	cout << "Enter the no. of elements: ";
	cin >> n;
	int arr[50];
	cout << "Enter elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout << "Original array: ";
	display(arr,n);
	selectionsort(arr,n);
	cout << endl;
	cout << "Sorted array using selection sort: ";
	display(arr,n);
return 0;		
}

#include<iostream>

using namespace std;

void insertionsort(int arr[], int n){
	int key,j;
	for(int i=0;i<n;i++){
		key = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
	arr[j+1]=key;
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
	insertionsort(arr,n);
	cout << endl;
	cout << "Sorted array using insertion sort: ";
	display(arr,n);
return 0;		
}

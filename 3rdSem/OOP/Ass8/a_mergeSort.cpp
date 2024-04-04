#include<bits/stdc++.h>
using namespace std;
#define MAX 100

class sorting{
  private:
    int n;
    int arr[MAX];
    void inputArray(){
      cout << "Enter the array elements:";
      for(int i=0; i<n; i++){
        cin >> arr[i];
      }
    }

    void printArray(int *a, int m){
      for(int i=0; i<m; i++){
        cout << a[i] << " ";
      }
    }

    void mergeArray(int *a, int lb1, int ub1, int lb2, int ub2){
    	int i=lb1, j=lb2;
    	int k = 0;
    	int temp[100];
    	while(i<=ub1 && j<=ub2){
    	  if(a[i] == a[j]){
    	  	temp[k++] = a[i++];
    	  	temp[k++] = a[j++];
    	  }
    	  else if(a[i] < a[j]){
    	  	temp[k++] = a[i++];
    	  }
    	  else if(a[i] > a[j]){
    	  	temp[k++] = a[j++];
    	  }
    	}
    	while(i<=ub1){
    		temp[k++] = a[i++];
    	}
    	while(j<= ub2){
    		temp[k++] = a[j++];
    	}
    	j=0;
    	for(i=lb1; i<= ub2; i++, j++){
    		a[i] = temp[j];
    	}
    }

    void mergeSort(int *a, int low, int high){
      if(low < high){
      	 int mid = (low+high)/2;
      	 
      	 mergeSort(a, low, mid);
      	 
      	 mergeSort(a, mid+1, high);
      	 
      	 mergeArray(a, low, mid, mid+1, high);
      }
    }

  public:
    sorting(int x){
      n = x;
      inputArray();
      
      mergeSort(arr, 0, n-1);

      cout << "The sorted array is:";
      printArray(arr, n);
      cout << endl;
    }
    ~sorting(){
    	cout << "Destructing sorting!" << endl;
    }
};

int main(){
  int n;
  cout << "Enter size of the array:";
  cin >> n;
  sorting s1(n);

  return 0;
}

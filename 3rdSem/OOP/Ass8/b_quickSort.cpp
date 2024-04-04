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

    int partition(int *a, int low, int high){
      int j=high;
      int k=high;
      int pivot = a[low];
      for(int i=high; i>low; i--){
        if(a[i]>pivot){
          swap(a[k], a[i]);
          k--;
        }
      }
      swap(a[k], a[low]);
      return k;
    }

    void quickSort(int *a, int low, int high){
      if(low<high){
        int ind = partition(a, low, high);
        quickSort(a, low, ind-1);
        quickSort(a, ind+1, high);
      }
    }

  public:
   sorting(int x){
      n = x;
      inputArray();
      
      quickSort(arr, 0, n-1);

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

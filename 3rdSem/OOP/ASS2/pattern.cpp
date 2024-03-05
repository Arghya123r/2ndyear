#include<iostream>

using namespace std;

void pattern(int n){
	
	for(int i=1;i<=n;i++){
		
		// for spaces
		for(int j=n;j>=i;j--){
			cout << " ";
		}
		
		for(int k=i;k>=1;k--){
			cout << k;
		}
		
		for(int l=2;l<=i;l++){
			cout << l;
		}
		
		cout << endl;
	}	
}

int main(){

	int n;
	cout << "Enter a number: ";
	cin >> n;

	pattern(n);		
		
				
return 0;

}		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
				

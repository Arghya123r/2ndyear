#include<iostream>
using namespace std;
bool prime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	for(int i=1;i<=100;i++){
		if(prime(i)==true){
			cout << i << endl;
		}
	}
return 0;					
}

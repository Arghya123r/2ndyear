#include<iostream>
#include<string>
using namespace std;
bool palindrome(string str){
	int j=str.length()-1;
	for(int i=0;i<j;i++,j--){
		if(str[i] != str[j]){
			return false;
		}	
	}	
	return true;
	
}

int main(){
	string str;
	cout << "Enter a string" << endl;
	cin >> str;
	if(palindrome(str)==true){
		cout << "String is a palindrome" << endl;
	}
	else{ 
		cout << "String is not a palindrome" << endl;
	}
return 0;
}	
					

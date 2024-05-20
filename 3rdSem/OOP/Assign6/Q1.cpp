#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;

int main(){
	string S1;
	cout << "Enter a string: ";
	cin >> S1;
	
	//cin.ignore();
	cout << "The string is: " << S1 << endl;
	cout << "Length of the string is: " << S1.length() << endl;
	cout << "Size of the string is: " << S1.size() << endl;
	cout << "Capacity of the string is: " << S1.capacity() << endl;
	int ind;
	cout << "Enter an index: ";
	cin >> ind;
	
	//cin.ignore();
	cout << "The character at index " << ind << " is: " << S1[ind] << endl;
	string sub = S1.substr(ind, 5);
	cout << "Substring of S1 starting from index " << ind << " and upto next 3 character is: " << sub << endl;
	char ch;
	cout << "Enter a character: " << endl;
	cin >> ch;
	cout << "First occurance of " << ch << " is: " << S1.find(ch) << endl;
	
	string S2;
	cout << "Enter another string: ";
	cin >> S2;
	
	//cin.ignore();
	cout << "The second string is: " << S2 << endl;
	string S3 = S1 + S2;
	cout << "Concatenating S1 and S2: " << S3 << endl;
	string S4 = S1.replace(1, 4, "gfg");
	cout << "Replaced in S1: " << S4 << endl;
	string S5 = S2.insert(2, "omm");
	cout << "Inserted in S2: " << S5 << endl;
	string S6 = S1.erase(2, 4);
	cout << "Erased from S1: " << S6 << endl;
	
	return 0;
}

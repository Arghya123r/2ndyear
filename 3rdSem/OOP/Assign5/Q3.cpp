#include<iostream>
using namespace std;

class A{
	public:
		void Inline1(){
			cout << "Inline function without using the keyword Inline" << endl;
		}
		
		~A(){
			cout << "Destructing A" << endl;
		}
};

inline void Inline2(){
	cout << "Inline function using the keyword Inline" << endl;
}

int main(){
	A a1;
	a1.Inline1();
	
	Inline2();
	
	return 0;
}

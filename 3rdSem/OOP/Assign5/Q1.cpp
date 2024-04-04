#include<iostream>
using namespace std;

class Base{
	public:
		virtual void Display(){
			cout << "Displaying from Base" << endl;
		}
		~Base(){
			cout << "Destructing occurs" << endl;
		}
};

class Derived: public Base{
	public:
		void Display(){
			cout << "Displayed from Derieved class!" << endl;
		}
		~Derived(){
			cout << "Destructing occurs" << endl;
		}
};

int main(){
	Base *bptr;
	Derived d1;
	
	bptr = &d1;
	bptr->Display();
	d1.Display();
	
	return 0;
}

#include<iostream>
using namespace std;

class Base{
	public:
		virtual void Display() = 0;
		~Base(){
			cout << "Destructing Base!" << endl;
		}
};

class Derived: public Base{
	public:
		void Display(){
			cout << "Displaying the Derieved class" << endl;
		}
		~Derived(){
			cout << "Destructing Derived class" << endl;
		}
};

int main(){
	Derived d1;
	
	d1.Display();
	
	return 0;
}

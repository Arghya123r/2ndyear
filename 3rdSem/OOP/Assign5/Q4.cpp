#include<iostream>
using namespace std;

class A{
	public:
		virtual void Display() = 0;
		~A(){
			cout << "Destructing A!" << endl;
		}
};

class B: public A{
	public:
		virtual void Display() = 0;
		~B(){
			cout << "Destructing B!" << endl;
		}
};

class C: public A{
	public:
		virtual void Display(){
			cout << "Displaying from C!" << endl;
		}
		~C(){
			cout << "Destructing C!" << endl;
		}
};

class D: public B{
	public:
		void Display(){
			cout << "Displaying from D!" << endl;
		}
		~D(){
			cout << "Destructing D!" << endl;
		}
};
class E: public B{
	public:
		void Display(){
			cout << "Displaying from E!" << endl;
		}
		~E(){
			cout << "Destructing E!" << endl;
		}
};
class F: public C{
	public:
		void Display(){
			cout << "Displaying from F!" << endl;
		}
		~F(){
			cout << "Destructing F!" << endl;
		}
};

int main(){
	C c1;
	c1.Display();
	D d1;
	d1.Display();
	E e1;
	e1.Display();
	F f1;
	f1.Display();
	
	return 0;
}

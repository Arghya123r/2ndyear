#include<iostream>
using namespace std;

class A{
	public:
		int a;
		A(){
			a = 0;
		}
		A(int x){
			a = x;
		}
		~A(){
			cout << "Destructing A!" << endl;
		}
};


//Hierarchical Inheritance
class B: public A{
	public:
		int b;
		B(){
			b = 0;
		}
		B(int x): A(x){
			b = 2*a;
		}
		~B(){
			cout << "Destructing B!" << endl;
		}
};

class C: public A{
	public:
		int c;
		C(){
			c = 0;
		}
		C(int x): A(x){
			c = 3*a;
		}
		~C(){
			cout << "Destructing C!" << endl;
		}
};

//Multiple Inheritance
class D: public B, public C{
	public:
		int d;
		D(int x, int y): B(x), C(y){
			d = b + c;
		}
		~D(){
			cout << "Destructing D!" << endl;
		}
};

int main(){
	int x, y;
	cout << "Enter two value: ";
	cin >> x >> y;
	D d1(x, y);
	cout << d1.d << endl;

	return 0;
}

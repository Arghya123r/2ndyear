#include<iostream>
using namespace std;

class B{
	int b;
	public:
		
		B(int a){
			b = a;
		}
		int getB(){
			return b;
		}
		~B(){
			cout << "\nDestructing B\n";
		}
};

class A: public B{
	int a;
	public:
		A(int x,int y) : B(x){
			a = y;
		}
		void sum(){
			a = getB() + a;
		}
		int getA(){
			return a;
		}
		~A(){
			cout << "\nDestructing A\n";
		}
};


int main(){
	int x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	A a1(x, y);
	a1.sum();
	cout << "Sum = " << a1.getA() << endl;
	
	return 0;
}

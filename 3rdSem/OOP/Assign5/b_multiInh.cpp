#include<iostream>
using namespace std;

class L{
	int l;
	public:
		L(int a){
			l = a;
		}
		int getL(){
			return l;
		}
		~L(){
			cout << "\nDestructing L\n";
		}
};

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

class A: public L, public B{
	int a;
	public:
		A(int x, int y): L(x), B(y){
			a = getL() * getB();
		}
		int getA(){
			return a;
		}
		~A(){
			cout << "\nDestructing A\n";
		}
};

int main(){
	int l, b;
	cout << "Enter length:";
	cin >> l;
	cout << "Enter breadth:";
	cin >> b;
	A area(l, b);
	
	cout << "The area is: " << area.getA();
	
	return 0;
}

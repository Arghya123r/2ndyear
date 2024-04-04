#include<iostream>
#include<string>
using namespace std;

class test{
	private:
		int x;
		float y;
		char a;
	public:
		test(){
			cout << "Enter integer data: " << endl;
			cin >> x;
			cout << "Enter float data: " << endl;
			cin >> y;
			cout << "Enter char data: " << endl;
			cin >> a;
		}
		test(test &t){
			x = t.x;
			y = t.y;
			a = t.a;
		}
		void putData(){
			cout<< "x= " << x << " y= " << y << " a= " << a << endl;
		}
		
		~test(){
			cout << "Destructing the object!\n" << endl;
		}
};

int main(){
	test t1;
	t1.putData();
	
	
	return 0;
}

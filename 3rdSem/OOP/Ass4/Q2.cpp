#include<iostream>
using namespace std;
class Ambi{
	protected :
		double c;
	public:
		Ambi(){
			c=0;
			}
		void add(int a, int b){
			c = a+b;
			cout<<"\n Sum of Integers = "<<c<<endl;
			}
		void add(double r,double d){
			c= r + d ;
			cout<<"\n Sum of Floating Points = "<<c<<endl;
			}
};
int main(){
	Ambi c;
	int a;
	int b;
	double p,q;
	cout<<" Give 2 number(Integers) = ";
	cin>>a;
	cin>>b;
	c.add(a,b);
	cout<<" Give 2 number(Floating Point) = ";
	cin>>p>>q;
	c.add(p,q);
	return 0;
}

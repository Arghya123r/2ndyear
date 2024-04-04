#include <iostream>
using namespace std;

class Base1 {
public:
  void greet() {
    cout << "Hello from Base1" << endl;
  }
};

class Base2 {
public:
  void greet() {
    cout << "Hello from Base2" << endl;
  }
};

class Derived : public Base1, public Base2 {
public:
  // Ambiguous condition for Overriding
};

int main() {
  Derived d;
  //d.greet(); 
  d.Base1::greet();
  d.Base2::greet();
  return 0;
}

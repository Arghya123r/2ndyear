#include <iostream>

using namespace std;

// Function overloading
void add(int a, int b) {
  cout << "Sum of two integers: " << a + b << endl;
}

void add(double a, double b) {
  cout << "Sum of two doubles: " << a + b << endl;
}

void add(string a, string b) {
  cout << "Concatenation of two strings: " << a + b << endl;
}

int main() {
  
  add(1, 2);
  add(1.56, 2.51);
  add("NAME:Arghya Das", " DEPT:CSBS");

  return 0;
}

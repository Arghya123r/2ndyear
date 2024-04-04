#include <iostream>

using namespace std;

class complex {
private:
    double real;
    double imag;

public:
    complex(double r = 0.0, double i = 0) : real(r), imag(i) {
        cout << "Constructor called " << endl;
    }
    ~complex() {
        cout << "Destructor called" << endl;
    }

    complex operator+(const complex &other) {
        return complex(real + other.real, imag + other.imag);
    }
    void show() {
        cout << "Real: " << real << ", Imaginary: " << imag << endl;
    }

    
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
};

int main() {
    complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "\nEnter second complex number:" << endl;
    c2.input();

    c3 = c1 + c2;

    cout << "\nSum of the two complex numbers:" << endl;
    c3.show();

    return 0;
}

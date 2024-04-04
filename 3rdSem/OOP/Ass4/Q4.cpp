#include <iostream>
using namespace std;

class Shape {
protected:
    int base, height;

public:
    Shape(int b = 0, int h = 0) : base(b), height(h) {
        cout << "Shape Constructor called" << endl;
    }

    virtual ~Shape() {
        cout << "Shape Destructor called" << endl;
    }

    // pure virtual function
    virtual int area() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(int b, int h) : Shape(b, h) {
        cout << "Rectangle Constructor called" << endl;
    }

    ~Rectangle() {
        cout << "Rectangle Destructor called" << endl;
    }

    int area() {
        return (base * height);
    }
};

class Triangle : public Shape {
public:
    Triangle(int b, int h) : Shape(b, h) {
        cout << "Triangle Constructor called" << endl;
    }

    ~Triangle() {
        cout << "Triangle Destructor called" << endl;
    }

    int area() {
        return (base * height / 2);
    }
};

int main(void) {
    int b, h;
    cout << "Enter base and height for Rectangle: ";
    cin >> b >> h;
    Rectangle rec(b, h);

    cout << "Enter base and height for Triangle: ";
    cin >> b >> h;
    Triangle tri(b, h);

    Shape *shape;

    shape = &rec;
    int area = shape->area();
    cout << "Area of Rectangle: " << area << endl;

    shape = &tri;
    area = shape->area();
    cout << "Area of Triangle: " << area << endl;

    return 0;
}

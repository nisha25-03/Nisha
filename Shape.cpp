#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0; // Pure virtual function
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.14 * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() override {
        return side * side;
    }
};

int main() {
    Rectangle rectangle(5.0, 3.0);
    Circle circle(4.0);
    Square square(6.0);

    cout << "Area of Rectangle: " << rectangle.area() << endl;
    cout << "Area of Circle: " << circle.area() << endl;
    cout << "Area of Square: " << square.area() << endl;

    return 0;
}


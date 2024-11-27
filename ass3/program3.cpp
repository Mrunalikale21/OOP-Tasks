#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0; 
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double calculateArea() override {
        return width * height;
    }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double calculateArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    Rectangle rect(10, 15);
    Triangle tri(10, 3);

    cout << "Rectangle Area: " << rect.calculateArea() << "\n";
    cout << "Triangle Area: " << tri.calculateArea() << "\n";

    return 0;
}

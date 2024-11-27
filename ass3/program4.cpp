#include <iostream>
#include <cmath>
using namespace std;

class Polygon {
protected:
    int sides;
    double length;
public:
    Polygon(int s, double l) : sides(s), length(l) {}
    virtual double calculateArea() = 0; 
    virtual void displayCoords() = 0;
};

class Rectangle : public Polygon {
private:
    double width;
public:
    Rectangle(double l, double w) : Polygon(4, l), width(w) {}
    double calculateArea() override {
        return length * width;
    }
    void displayCoords() override {
        cout << "Rectangle has 4 coordinates.\n";
    }
};

class Triangle : public Polygon {
private:
    double height;
public:
    Triangle(double b, double h) : Polygon(3, b), height(h) {}
    double calculateArea() override {
        return 0.5 * length * height;
    }
    void displayCoords() override {
        cout << "Triangle has 3 coordinates.\n";
    }
};

int main() {
    Rectangle rect(10, 15);
    Triangle tri(10, 3);

    cout << "Rectangle Area: " << rect.calculateArea() << "\n";
    rect.displayCoords();

    cout << "Triangle Area: " << tri.calculateArea() << "\n";
    tri.displayCoords();

    return 0;
}

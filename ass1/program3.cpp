#include <iostream>
using namespace std;

class Area {
public:
    Area(double side) {
        cout << "Area of Square: " << side * side << " square units" << endl;
    }
    Area(int length, int breadth) {
        cout << "Area of Rectangle: " << length * breadth << " square units" << endl;
    }
    Area(double radius, bool isCircle) {
        if (isCircle)
            cout << "Area of Circle: " << 3.14159 * radius * radius << " square units" << endl;
    }
};

int main() {
    Area square(4);                        
    Area rectangle(4, 10);                 
    Area circle(7, true);                  
    return 0;
}

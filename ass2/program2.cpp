#include <iostream>
using namespace std;

class AddNumbers {
    int sum;

public:
    AddNumbers(int a, int b) {
        sum = a + b;
    }

    AddNumbers(int a, int b, int c) {
        sum = a + b + c;
    }

    AddNumbers(int a, int b, int c, int d) {
        sum = a + b + c + d;
    }

    void display() {
        cout << "Sum: " << sum << endl;
    }
};

int main() {
    AddNumbers obj1(2, 3);
    obj1.display();

    AddNumbers obj2(2, 3, 4);
    obj2.display();

    AddNumbers obj3(2, 3, 4, 5);
    obj3.display();

    return 0;
}

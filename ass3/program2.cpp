#include <iostream>
using namespace std;

class Number {
public:
    virtual void check(int num) = 0;
};

class Even : public Number {
public:
    void check(int num) override {
        if (num % 2 == 0) {
            cout << num << " Even Number.\n";
        }
    }
};

class Odd : public Number {
public:
    void check(int num) override {
        if (num % 2 != 0) {
            cout << num << " Odd Number.\n";
        }
    }
};

int main() {
    Even evenObj;
    Odd oddObj;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    evenObj.check(number);
    oddObj.check(number);

    return 0;
}


#include <iostream>
using namespace std;

class Parent {
public:
    string name;
    string aadhaar;
    string address;

    Parent(string n, string a, string ad) : name(n), aadhaar(a), address(ad) {}

    void display() {
        cout << "Parent Name: " << name << ", Aadhaar: " << aadhaar << ", Address: " << address << endl;
    }
};

class Child : public Parent {
public:
    Child(string n, string a, string ad) : Parent(n, a, ad) {}

    void displayChild() {
        cout << "Child Details Inherited - " << endl;
        display();
    }
};

int main() {
    Child child("Mrunali", "1234-5678-9012", "Pune");
    child.displayChild();
    return 0;
}

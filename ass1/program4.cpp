#include <iostream>
#include <string>
using namespace std;

class Bike {
private:
    string brand;
    string model;
    int year;

public:
    Bike(string b, string m, int y) : brand(b), model(m), year(y) {}

    void displayDetails() {
        cout << "Bike Brand: " << brand << endl;
        cout << "Bike Model: " << model << endl;
        cout << "Manufacturing Year: " << year << endl;
    }
};

int main() {
    Bike myBike("Royal enfield", "bullet", 2000);
    myBike.displayDetails();
    return 0;
}

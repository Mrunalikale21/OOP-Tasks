#include <iostream>
#include <string>
using namespace std;

class Liquid {
public:
    string density;
    string country;
};

class Fuel {
public:
    double price;
};

class Petrol : public Liquid, public Fuel {
public:
    void display() {
        cout << "Petrol Details:\n";
        cout << "Density: " << density << "\n";
        cout << "Country: " << country << "\n";
        cout << "Price: " << price << " per liter\n";
    }
};

int main() {
    Petrol petrol;
    petrol.density = "0.80 kg/L";
    petrol.country = "India";
    petrol.price = 100;

    petrol.display();

    return 0;
}

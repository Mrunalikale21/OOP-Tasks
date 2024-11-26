#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string type;
    int totalSUVs;
    int year;
    string fuelType;
    double ncapRating;

public:
    Vehicle(string t, int suvs, int yr, string fuel, double ncap)
        : type(t), totalSUVs(suvs), year(yr), fuelType(fuel), ncapRating(ncap) {}

    void displayDetails() {
        cout << "Vehicle Type: " << type << endl;
        cout << "Total SUVs Manufactured: " << totalSUVs << endl;
        cout << "Year: " << year << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "NCAP Rating: " << ncapRating << " stars" << endl;
    }
};

int main() {
    Vehicle car("SUV", 700, 2024, "Petrol", 4.5);
    car.displayDetails();
    return 0;
}

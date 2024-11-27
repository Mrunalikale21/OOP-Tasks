#include <iostream>
using namespace std;

class Transport {
public:
    string source, destination;

    Transport(string src, string dest) : source(src), destination(dest) {}
};

class Roadways : public Transport {
    double price;
    double time;

public:
    Roadways(string src, string dest, double p, double t) 
        : Transport(src, dest), price(p), time(t) {}

    void display() {
        cout << "Roadways from " << source << " to " << destination
             << " | Price: " << price << " | Time: " << time << " hrs" << endl;
    }
};

class Airways : public Transport {
    double price;
    double time;

public:
    Airways(string src, string dest, double p, double t) 
        : Transport(src, dest), price(p), time(t) {}

    void display() {
        cout << "Airways from " << source << " to " << destination
             << " | Price: " << price << " | Time: " << time << " hrs" << endl;
    }
};

class Seaways : public Transport {
    double price;
    double time;

public:
    Seaways(string src, string dest, double p, double t) 
        : Transport(src, dest), price(p), time(t) {}

    void display() {
        cout << "Seaways from " << source << " to " << destination
             << " | Price: " << price << " | Time: " << time << " hrs" << endl;
    }
};

int main() {
    Roadways road("Mumbai", "Pune", 500, 4);
    Airways air("Delhi", "Mumbai", 5000, 2);
    Seaways sea("Mumbai", "Goa", 2000, 10);

    road.display();
    air.display();
    sea.display();

    return 0;
}

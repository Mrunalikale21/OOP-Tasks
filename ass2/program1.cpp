#include <iostream>
#include <cstring>
using namespace std;

class Employee {
    string name;
    int age;
    int id;

public:
    Employee(string emp_name, int emp_age, int emp_id) {
        name = emp_name;
        age = emp_age;
        id = emp_id;
        cout << "Dynamic constructor invoked!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", ID: " << id << endl;
    }
};

int main() {
    string emp_name = "Mrunali Kale";
    Employee emp(emp_name, 20, 013);
    emp.display();
    return 0;
}

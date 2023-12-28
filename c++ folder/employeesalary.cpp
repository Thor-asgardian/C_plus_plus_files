#include <iostream>
using namespace std;

class Employee {
    int id;
    float salary;

public:
    void getDetails() {
        cout << "Enter employee id: ";
        cin >> id;

        cout << "Enter employee salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "Employee id is " << id << endl;
        cout << "Employee salary is " << salary << endl;
    }
};

int main() {
    int i;
    Employee employees[10];

    for (i = 0; i < 10; i++) {
        cout << "Enter details for employee " << i + 1 << endl;
        employees[i].getDetails();
    }

    cout << "\nDetails of employees:\n";
    for (i = 0; i < 10; i++) {
        cout << "Details for employee " << i + 1 << ":\n";
        employees[i].displayDetails();
        cout << endl;
    }

    return 0;
}
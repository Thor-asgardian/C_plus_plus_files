#include <iostream>
using namespace std;

class base {
    // private by default
    int data1; // not inheritable;
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base::setdata() {
    cout << "Enter value for data1: ";
    cin >> data1;

    cout << "Enter value for data2: ";
    cin >> data2;
}

int base::getdata1() {
    return data1;
}

int base::getdata2() {
    return data2;
}

class derived : private base {
public:
    int data3;
    void process();
    void display();
};

void derived::process() {
    setdata(); // Call setdata() from the base class
    data3 = data2 * getdata1();
}

void derived::display() {
    cout << "Value of data 1 is: " << getdata1() << endl;
    cout << "Value of data 2 is: " << data2 << endl;
    cout << "Value of data 3 is: " << data3 << endl;
}

int main() {
    derived der;
    der.process();
    der.display();
    return 0;
}
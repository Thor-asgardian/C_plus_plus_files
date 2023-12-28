#include <iostream>
using namespace std;

class Number {
    int a;

public:
    Number() {
        a = 0;
    }

    Number(int num) {
        a = num;
    }

    Number(const Number &obj) {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }

    void display() {
        cout << "Number in the object is " << a << endl;
    }
};

int main() {
    int inputValue;

    cout << "Enter value for object x: ";
    cin >> inputValue;
    Number x(inputValue);

    cout << "Enter value for object y: ";
    cin >> inputValue;
    Number y(inputValue);

    Number z(45);
    Number z1(x);

    cout << "Object x: ";
    x.display();

    cout << "Object y: ";
    y.display();

    cout << "Object z: ";
    z.display();

    cout << "Object z1: ";
    z1.display();

    return 0;
}
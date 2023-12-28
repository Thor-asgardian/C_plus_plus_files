#include <iostream>
using namespace std;

class complex {
    int a, b;

public:
    complex(void);
    void setValues();
    void printNumber() {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(void) {
    a = 10;
    b = 0;
}

void complex::setValues() {
    cout << "Enter the real part (a): ";
    cin >> a;
    cout << "Enter the imaginary part (b): ";
    cin >> b;
}

int main() {
    complex c;

    // Accept input from the user to set the values of a and b
    c.setValues();

    c.printNumber();
    return 0;
}
#include <iostream>
using namespace std;

class base1 {
protected:
    int base1int;

public:
    void setBase1int(int a) {
        base1int = a;
    }
};

class base2 {
protected:
    int base2int;

public:
    void setBase2int(int a) {
        base2int = a;
    }
};

class base3 {
protected:
    int base3int;

public:
    void setBase3int(int a) {
        base3int = a;
    }
};

class derived : public base1, public base2, public base3 {
public:
    void show() {
        cout << "the value of base 1 is " << base1int << endl;
        cout << "the value of base 2 is " << base2int << endl;
        cout << "the value of base 3 is " << base3int << endl;
        cout << "the sum is " << base1int + base2int + base3int << endl;
    }
};

int main() {
    derived bhuvan;

    // Accept input from the user
    int value;
    cout << "Enter the value for base 1: ";
    cin >> value;
    bhuvan.setBase1int(value);

    cout << "Enter the value for base 2: ";
    cin >> value;
    bhuvan.setBase2int(value);

    cout << "Enter the value for base 3: ";
    cin >> value;
    bhuvan.setBase3int(value);

    // Display the results
    bhuvan.show();

    return 0;
}
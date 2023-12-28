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

class derived : public base1, public base2 {
public:
    void show() {
        cout << "the value of base 1 is " << base1int << endl;
        cout << "the value of base 2 is " << base2int << endl;
        cout << "the sum is " << base1int + base2int << endl;
    }
};

int main() {
    derived bhuvan;

    int input1, input2;
    cout << "Enter the value for base 1: ";
    cin >> input1;
    cout << "Enter the value for base 2: ";
    cin >> input2;

    bhuvan.setBase1int(input1);
    bhuvan.setBase2int(input2);

    bhuvan.show();

    return 0;
}
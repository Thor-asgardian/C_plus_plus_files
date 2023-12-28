#include <iostream>
using namespace std;

class complex {
    int a, b;

public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    friend complex sumcomplex(complex o1, complex o2);

    void printNumber() {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2) {
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main() {
    complex c1, c2, sum;

    // Input for the first complex number
    int realPart, imagPart;
    cout << "Enter real part of first complex number: ";
    cin >> realPart;
    cout << "Enter imaginary part of first complex number: ";
    cin >> imagPart;
    c1.setNumber(realPart, imagPart);

    // Input for the second complex number
    cout << "Enter real part of second complex number: ";
    cin >> realPart;
    cout << "Enter imaginary part of second complex number: ";
    cin >> imagPart;
    c2.setNumber(realPart, imagPart);

    c1.printNumber();
    c2.printNumber();
    sum = sumcomplex(c1, c2);
    sum.printNumber();

    return 0;
}
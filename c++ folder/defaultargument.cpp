#include <iostream>
using namespace std;

class simple {
    int data1;
    int data2;

public:
    simple(int a, int b = 9) {
        data1 = a;
        data2 = b;
    }

    void printNumber() {
        cout << "Values of data 1 and data 2 are " << data1 << " and " << data2 << endl;
    }
};

int main() {
    int userInput1, userInput2;

    cout << "Enter the value for data1: ";
    cin >> userInput1;

    cout << "Enter the value for data2 (press Enter for default value 9): ";
    cin >> userInput2;

    simple s(userInput1, userInput2);

    s.printNumber();
    return 0;
}

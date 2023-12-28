#include <iostream>
using namespace std;

int count = 0;

class Num {
public:
    Num() {
        count++;
        cout << "This is the time where constructor is incremented " << count << endl;
    }

    ~Num() {
        cout << "This is the time where destructor is decremented " << count << endl;
        count--;
    }
};

int main() {
    cout << "We are in the main function..." << endl;

    int numObjects;
    cout << "Enter the number of objects to create: ";
    cin >> numObjects;

    for (int i = 0; i < numObjects; ++i) {
        cout << "Creating object " << i + 1 << endl;
        Num n;
    }

    cout << "Exiting the program..." << endl;

    return 0;
}
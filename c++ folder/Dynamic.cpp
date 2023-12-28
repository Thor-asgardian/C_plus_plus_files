#include <iostream>
using namespace std;

class BankDeposit {
    int principal, years;
    float intrestrate, returnValue;

public:
    BankDeposit() {};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r) {
    principal = p;
    years = y;
    intrestrate = r;
    returnValue = principal;
    
    for(int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + r);
    }
}

BankDeposit::BankDeposit(int p, int y, int r) {
    principal = p;
    years = y;
    intrestrate = float(r) / 100;
    returnValue = principal;
    
    for(int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + intrestrate);
    }
}

void BankDeposit::show() {
    cout << endl << "Principal amount was " << principal << endl << "Return value after " << years << " years is " << returnValue << endl;
}

int main() {
    BankDeposit bd1, bd2;
    int p, y;
    float r;
    int R;
    
    cout << "Enter the principal amount, number of years, and interest rate : " << endl;
    cin >> p >> y >> r;
    
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    
    cout << "Enter the principal amount, number of years, and interest rate (integer): " << endl;
    cin >> p >> y >> R;
    
    bd2 = BankDeposit(p, y, R);
    bd2.show();  // Corrected this line to call bd2.show() instead of bd1.show()

    return 0;
}
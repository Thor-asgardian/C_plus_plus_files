#include <iostream>
using namespace std;

class student {
protected:
    int rollno;

public:
    void setnumber(int a) {
        rollno = a;
    }
    void printnumber(void) { 
        cout << "Your roll number is " << rollno << endl;
    }
};

class test : virtual public student {
protected:
    float maths, physics;

public:
    void setmarks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }
    void printmarks(void) {
        cout << "Your results are here" << endl
             << "Maths " << maths << endl
             << "Physics " << physics << endl;
    }
};

class sports : virtual public student {
protected:
    float score;

public:
    void setscore(float s) {
        score = s;
    }
    void printscore(void) {
        cout << "Your PT score is " << score << endl;
    }
};

class result : public test, public sports {
private:
    float total;

public:
    void display() {
        total = maths + physics + score;
        printnumber(); 
        printmarks();
        printscore();
        cout << "Your total score is: " << total << endl;
    }
};

int main() {
    result r1;
    r1.setnumber(5);
    r1.setmarks(90.2, 89.9);
    r1.setscore(50);
    r1.display(); 
    return 0;
}

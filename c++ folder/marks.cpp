#include <iostream>
using namespace std;

class student {
	protected:
    int rollno; // not inheritable;
public:
    void setrollno(int);
    void getrollno(void);
};

void student::setrollno(int r) {
    rollno = r;
}

void student::getrollno() {
    cout<<"roll number is "<<rollno<<endl;
}


class exam : public student {
protected:
    float maths;
    float physics;
    public:
    void setmarks(float, float);
    void getmarks(void);
};

void exam::setmarks(float m1, float m2) {
    maths = m1;
    physics = m2;
}

void exam::getmarks() {
    cout<<"marks obtained in maths and physics are "<<maths<<" and "<<physics<<endl;
}

class result : public exam {
    float percentage;
    //float physics;
    public:
    void display(){
    	getrollno();
    	getmarks();
    	cout<<"your result is "<<(maths+physics)/2<<"%"<<endl;
	}
};

int main() {
	result bhuvan;
	bhuvan.setrollno(20);
	bhuvan.setmarks(94.0, 90.0);
	bhuvan.display();
    return 0;
}

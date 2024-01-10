//method-1
#include <iostream>
using namespace std;

class base1 {

public:
    void greet() {
        cout << "How are you" << endl;
    }
};

class base2 {

public:
    void greet() {
        cout << "Kaise ho" << endl;
    }
};

class derived : public base1, public base2 {
public:
    int a;
    
    public:
    void greet() {
        base2::greet();
    }
};

int main() {
    base1 base1obj;
    base2 base2obj;
    
    derived dobj;
    
    dobj.greet();    
    
    return 0;
}

//method-2
#include <iostream>
using namespace std;

class b {
public:
    void say() {
        cout << "hello" << endl;
    }
};

class derived : public b {
public:
    int a;

public:
    void say() {
        b::say();
    }
};

int main() {
    b bobj;
    derived dobj;

    dobj.say();

    return 0;
}

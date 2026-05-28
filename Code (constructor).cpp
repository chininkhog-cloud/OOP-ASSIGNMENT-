#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int Base_num;

    // Default constructor
    Base() {
        cout << "Constructor of base class" << endl;
        Base_num = 1;
    }

    // Parameterized constructor
    Base(int n1) {
        cout << "Constructor of base class" << endl;
        Base_num = n1;
    }

    // Destructor
    ~Base() {
        cout << "Destructor of base class" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    int Derived_num;

    // Constructor 1
    Derived(int n1) {
        cout << "Constructor of derived class" << endl;
        Derived_num = n1;
    }

    // Constructor 2 calling Base constructor
    Derived(int n1, int n2) : Base(n1) {
        cout << "Constructor of derived class" << endl;
        Derived_num = n2;
    }

    // Destructor
    ~Derived() {
        cout << "Destructor of derived class" << endl;
    }
};

int main() {

    Derived *ptr1 = new Derived(2);

    cout << endl;

    Derived *ptr2 = new Derived(1, 2);

    cout << endl;

    delete ptr1;
    delete ptr2;

    return 0;
}
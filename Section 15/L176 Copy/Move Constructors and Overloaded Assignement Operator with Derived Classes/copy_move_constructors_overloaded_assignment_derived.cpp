/*
    Inheritance (Copy/Move constructors and overloaded operator =):
        - Not inherited from the Base class
            - Compiler-provided versions may be fine as they will automatically call the base class versions
        - Can explicitly invoke Base class versions from Derived class
            - Compiler slices out the Base component of the Derived object to pass to Base constructors
            - Derived versions MUST invoke the Base version explicitly
        - Be careful with raw pointers (provide deep copy semantics)
*/

#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
    Base() : value {0} { cout << "Base default constructor" << endl; }
    Base(int x) : value {x} { cout << "Base (int) overloaded constructor" << endl; }

    // Base Copy Constructor
    Base(const Base &source) : value {source.value} { cout << "Base copy constructor" << endl;} 

    ~Base() { cout << "Base destructor" << endl; }

    // Base Overloaded Copy Assignemnt
    Base &operator=(const Base &rhs) {
        cout << "Base operator=" << endl;
        if (this != & rhs)
            value = rhs.value;
        return *this;
    }
};

class Derived : public Base {
    using Base::Base;
private:
    int doubled_value;
public:
    Derived() : Base(), doubled_value {0} { cout << "Derived default constructor" << endl; }
    Derived(int x) : Base {x}, doubled_value {x * 2} { cout << "Derived (int) overloaded constructor" << endl; }

    // Derived Copy Constructor
    Derived(const Derived &source) : Base(source), doubled_value {source.doubled_value} { cout << "Derived copy constructor" << endl; }

    ~Derived() { cout << "Derived destructor" << endl; }

    // Derived Overloaded Copy Assignment
    Derived &operator=(const Derived &rhs) {
        cout << "Derived operator=" << endl;
        if (this != & rhs) {
            Base::operator=(rhs); // Assign Base part
            doubled_value = rhs.doubled_value; // Assigned Derived part
        }
        return *this;
    }
};

#include <iostream>

using namespace std;

int main() {
    Base b {100};   // Base overloaded constructor
    Base b1 {b};    // Base copy constructor
    b = b1;         // Base copy assignemnt

    Derived d {100};    // Base, then Derived overloaded constructor
    Derived d1 {d};     // Base, then Derived copy constructor
    d = d1;             // Derived, Base copy assignments, then Base, Derived copy constructors

    return 0; // (Derived, then base destructor) x2, Base destructor x2
}
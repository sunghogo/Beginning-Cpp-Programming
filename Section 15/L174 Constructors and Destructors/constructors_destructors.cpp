/*
    Constructors and Destructors:
        - Base components of Derived class must be initialized BEFORE Derived class is initialized
            - Base class constructor executes then Derived class constructor executes

        - Derived components of Derived class must be destroyed BEFORE the Base class destructor is invoked
            - Derived class destructor executes then Base class destructor executes
            - Each destructor should free resources allocated in its own constructors

    Derived CLass Inheritance:
        - A Derived class does NOT inherit:
            - Base class constructors
            - Base class destructor
            - Base class overloaded assignment operators
            - Base class friend functions
        - However, Derived class constructors, destructors, and overloaded assignment operators can INVOKE the Base class versions
        - C+11 allows explicit inheritance of Base "non-special" constructors with:
            using Base::Base; (anywhere in the derived class declaration)
            - Lots of rules:
                - Default, copy, move constructors are not included
                - Inherited constructors also inherit access specifier
                - If overloaded constructor is defined in the Derived class, then the Base class overloaded constructor is not inherited
                - Base class constructor default arguments are not inherited 
*/

#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
    Base() : value {0} { cout << "Base default constructor" << endl; }
    Base(int x) : value {x} { cout << "Base (int) overloaded constructor" << endl; }
    ~Base() { cout << "Base destructor" << endl; }
};

class Derived : public Base {
    using Base::Base;
private:
    int doubled_value;
public:
    Derived() : doubled_value {0} { cout << "Derived default constructor" << endl; }
    Derived(int x) : doubled_value {x * 2} { cout << "Derived (int) overloaded constructor" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
};

int main() {
    Base b; // Base default constructor
    Base b2 {100}; // Base overloaded constructor

    Derived d; // Base default constructor, then Derived default contructor (if defined)
    Derived d2 {100}; // Base default constructor vs. Base overloaded constructor if inherited (using Base::Base;), then Derived overloaded constructor

    return 0; // (Derived destructor, Base Destructor) x 2, Base destructor x2
}
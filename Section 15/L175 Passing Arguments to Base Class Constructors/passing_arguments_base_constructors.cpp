/*
    Inheritance (Passing arguments to base class constructors):
        - We can invoke whichever Base class constructor we wish in the initialization list of the Derived class
        - Unless invoked explicitly, it will run the Base class default constructor automatically
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
    Derived() : Base(), doubled_value {0} { cout << "Derived default constructor" << endl; }
    Derived(int x) : Base {x}, doubled_value {x * 2} { cout << "Derived (int) overloaded constructor" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
};

int main() {
    Derived d; // Base default constructor, then Derived default constructor
    Derived d2 {1000}; // Base overloaded constructor initialized (Base value = 1000), then Derived overloaded constructor (Derived doubled_value = 2000)
    
    return 0; // (Dervied destructor, Base destructor) x2
}
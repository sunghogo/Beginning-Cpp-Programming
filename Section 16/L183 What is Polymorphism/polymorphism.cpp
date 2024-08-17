/*
    What is Polymorphism?
        - Fundamental to OOP
        - Polymorphism
            - Compile-time (aka early/static binding)
            - Run-time (aka late/dynamic binding)
                - Able to assign different meanigns to same function at run-time
        - Allows us to program more abstractly
        - Not the default in C++ (which is static binding), run-time polymorphism is achieved via:
            - Inheritance
            - Base class pointers or references
            - Virtual functions

    Types of Polymorphism:
        - Compile-time
            - Function Overloading
            - Opeartor Overloading
        - Run-Time
            - Function Overriding

    Static vs Dynamic Binding:
        - Static binding will always call the method associated with the object's specifed class/type at compile time
        - Dynamic binding can override this behavior and call the method associated with the object's type/class at run-time
            - So you can now write functions, methods, and data structures that use pointers and references to base class objects, and have it refer to the object's derived class at runtime  
*/

#include <iostream>
#include <memory>

using namespace std;

class Base {
public:
    void say_hello() const {
         cout << "Hello - I'm a Base class object" << endl; 
    }
};

class Derived: public Base {
public:
    void say_hello() const {
        cout << "Hello - I'm a Derived class object" << endl;
    }
};

void greetings(const Base &obj) {
    cout << "Greetings: ";
    obj.say_hello();
}

int main() {
    Base b;
    b.say_hello(); // No pointers or virtual methods, Base::say_hello()

    Derived d;
    d.say_hello(); // No pointers or virtual methods, Derived::say_hello()

    // Function statically bound to Base reference
    greetings(b); // Base::say_hello()
    greetings(d); // Base::say_hello()

    // Method/pointer statically bound to declared Base type
    Base *ptr = new Derived();
    ptr->say_hello(); // Base::say_hello()

    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>(); // smart pointer
    ptr1->say_hello(); // Base::say_hello()

    delete ptr;

    return 0;
}
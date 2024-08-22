/*
    The override specifier:
        - We can override Base class virtual functions using C++11 override specifier to have compiler ensured overriding
        - The function signature (name, args, specifiers) and return must be EXACTLY the same, or else we have redfinition NOT overriding
            - Redifinition is statically bound
            - Overriding is dynamically bound
*/

#include <iostream>

class Base {
public:
    virtual void say_hello() const {
        std::cout << "Hello - I'm a Base class Object" << std::endl;
    }
    virtual ~Base() {}
};

class Derived: public Base {
public:
    virtual void say_hello() const override { // Notice no const initially
        std::cout << "Hello - I'm a Derived class Object" << std::endl;
    }
    virtual ~Derived() {}
};

int main() {

    Base *p1 = new Base(); 
    p1->say_hello(); // Base::say_hello()

    Derived *p2 = new Derived();
    p2->say_hello(); // Derived::say_hello()

    Base *p3 = new Derived();
    p3->say_hello(); // without override error checking: Base::say_hello(), fixed is Derived::say_hello()

    return 0;
}
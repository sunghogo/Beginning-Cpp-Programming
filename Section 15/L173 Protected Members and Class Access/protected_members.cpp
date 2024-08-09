/*
    Protected Members and Class Access:
        class Base {
        protected:
            // protected Base class members...
        };

        - Accessible from the Base class itself and derived Classes
        - Not accessible by objects of Base or Derived (same as private)

    Public Inheritance:
        - Access permissions for the inherited Base members remain the same in Derived Classes
        - Inherited Base private members are inaccessible from Derived class

    Protected Inheritance:
        - Inherited Base public members become protected members in Derived classes
        - Inherited Base private members are inaccessible from Derived class
    
    Private Inheritance:
        - Inherited Base public and protected members become private members in Derived classes
        - Inherited Base private members are inaccessible from Derived class
*/

#include <iostream>

using namespace std;

class Base {
// Note friends of Base hvae access to all
public:
    int a {0};
    void display() {std::cout << a << ", " << b << ", " << c << std::endl;}
protected:
    int b {0};
private:
    int c {0};
};

class Derived : public Base {
// Note friends of Derived have access to only what Derived has access to

// a will be public
// b will be protected
// c will not be accessible (but still inherited)
public:
    void access_base_members() {
        a = 100;  // OK
        b = 200;  // OK
        // c = 300; // Compiler Error: Not accesible
    }

};

int main() {

    cout << "===== Base member access from base objects ===============" << endl;
    Base base;
    base.a = 100; // OK
    // base.b = 200; // Compiler Error
    // base.c = 300; // Compiler Error
    
    cout << "===== Base member access from derived objects ===============" << endl;
    Derived derived;
    // Public Inheritance
    derived.a = 100; // OK
    // derived.b = 200; // Compiler Error
    // derived.c = 300; // Compiler Error

    
    return 0;
}
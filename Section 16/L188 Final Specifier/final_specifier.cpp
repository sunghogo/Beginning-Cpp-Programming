/*
    The final specifier (C+11):
        - When used at the class level: 
            - Prevents a class from being derived from
        = When used at the method level:
            - Prevents virtual method from being overriden in derived class

        class Base final {
            ... // Cannot derive from Base
        public:
            virtual void some_method() final;
        }

        class Derived final: public Base { // Error: cannot derive from Base
            ...
        public:
            virtual void some_method(); // Error: cannot override Base method
        }
*/

class A {
public:
    virtual void do_something();
};

class B: public A {
public:
    virtual void do_something() final; // prevents further overriding
};

class C final: public B {
public:
    // virtual void do_something(); // COMPILER ERROR - Can't override
};

// class D: public C {}; // COMPILER ERROR - Can't derrive

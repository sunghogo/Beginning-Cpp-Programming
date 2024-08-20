/*
    Virtual Destructors:
        - Behavior is undefined in C++ standard if a derived class without a virtual destructor is destroyed by deleting its base class pointer 
            - Derived objects must be destroyed in the correct order starting at the correct destru ctor
        - If a Base class has virtual functions:
            - ALWAYS provide a public virtual destructor
            - If base class destructor is virtual, then all derived class destructors are virtual
        - Virtual constructors are not allowed / doesn't make sense (since Derived class is Base class, but not other way around)

        class Base {
        public:
            virtual void withdraw(double amount);
            virtual ~Account(); 
        };
*/

#include <iostream>
#include <vector>

class Account {
protected:
    int balance {0};
public:
    virtual void withdraw(int amount) {std::cout << "In Account::withdraw" << std::endl; }
    virtual ~Account() { std::cout<<"Account::~Account" << std::endl;}
};

class Checking : public Account {
public:
    virtual void withdraw(int amount) {std::cout << "In Checking::withdraw" << std::endl; }
    virtual ~Checking() { std::cout<<"Checking::~Checking" << std::endl;}
};

class Savings : public Account {
public:
    virtual void withdraw(int amount) {std::cout << "In Savings::withdraw" << std::endl; }
    virtual ~Savings() { std::cout<<"Savings::~Savings" << std::endl;}
};

class Trust : public Account {
public:
    virtual void withdraw(int amount) {std::cout << "In Trust::withdraw" << std::endl; }
    virtual ~Trust() { std::cout<<"Trust::~Trust" << std::endl;}
};

int main() {
    std::cout << "\n======= Pointers ========"  << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000); // Account::withdraw
    p2->withdraw(1000); // Savings::withdraw
    p3->withdraw(1000); // Checking::withdraw
    p4->withdraw(1000); // Trust::withdraw

    // Without Base class virtual destructor, will only call Account destructors
    // With Base class virtual destructor, will call each object type destructor:
    std::cout << "\n======= Clean Up ========"  << std::endl;
    delete p1; // Account::~Account 
    delete p2; // Savings::~Savings, Account::~Account
    delete p3; // Checking::`Checking, Account::~Account
    delete p4; // Trust::~Trust, Account::~Account

    return 0;
}
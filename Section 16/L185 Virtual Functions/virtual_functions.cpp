/*
    Virtual Functions:
        - Redefined functions are bound statically vs Overridden functions are bound dynamically
        - Virtual funcations are overridden
        - Allow us to treat all objects generally as objects of Base class

    Declaring Virtual Functions:
        - Declare the function you want to override as virtual in the Base class
        - Virtual functions are virtual all the way down the heirarchy from this point  
        - Dynamic polymorphism only via Base class pointer or reference

        class Base {
        public:
            virtual void withdraw(double amount);
            ...
        };

        - Override the function in the Derived classes
        - Function signature and return type must match EXACTLY
        - Virtual keyword is not required but is best practice
        - If you don't provide an overridden version, it inherits from Base class

        class Derived {
        public:
            virtual void withdraw(double amount);
            ...
        }
*/
#include <iostream>
#include <vector>

class Account {
protected:
    int balance {0};
public:
    virtual void withdraw(int amount) {std::cout << "In Account::withdraw" << std::endl; }
};

class Checking : public Account {
public:
    virtual void withdraw(int amount) {std::cout << "In Checking::withdraw" << std::endl; }
};

class Savings : public Account {
public:
    virtual void withdraw(int amount) {std::cout << "In Savings::withdraw" << std::endl; }
};

class Trust : public Account {
public:
    virtual void withdraw(int amount) {std::cout << "In Trust::withdraw" << std::endl; }
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

    std::cout << "\n======= Array ========"  << std::endl;
    Account *array[] = {p1, p2, p3 ,p4};
    for (auto i {0} ; i < 4 ; ++i)
        array[i]->withdraw(1000);

    std::cout << "\n======= Array ========"  << std::endl;
    array[0] = p4;
    for (auto i {0} ; i < 4 ; ++i)
        array[i]->withdraw(1000);

    std::cout << "\n======= Vector ========"  << std::endl;
    std::vector<Account *> accounts {p1, p2, p3, p4};
    for (auto &acc_ptr: accounts)
        acc_ptr->withdraw(1000);

    std::cout << "\n======= Clean Up ========"  << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}
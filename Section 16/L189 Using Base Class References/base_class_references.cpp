/*
    Using Base class references:
        - We can use Base class references with dynamic polymorphism
            - Useful for when we pass objects to functions that expect a Base class reference
*/
#include <iostream>

class Account {
protected:
    double balance;
public:
    virtual void withdraw(double amount) {std::cout << "Account::withdraw" << std::endl;}
    virtual ~Account() {};
};

class Checking: public Account {
public:
    virtual void withdraw(double amount) override {std::cout << "Checking::withdraw" << std::endl;}
    virtual ~Checking() {};
};

class Savings: public Account {
public:
    virtual void withdraw(double amount) override {std::cout << "Savings::withdraw" << std::endl;}
    virtual ~Savings() {};
};

class Trust: public Savings {
public:
    virtual void withdraw(double amount) override {std::cout << "Trust::withdraw" << std::endl;}
    virtual ~Trust() {};
};

void do_withdraw(Account &account, double amount) {
    account.withdraw(amount);
}

int main() {

    Account a;
    Account &ref1 = a;
    ref1.withdraw(1000); // In Account::withdraw

    Trust t;
    Account &ref2 = t;
    ref2.withdraw(1000); // In Trust::withdraw

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1, 1000); // In Account::withdraw
    do_withdraw(a2, 1000); // In Savings::withdraw
    do_withdraw(a3, 1000); // In Checking::withdraw
    do_withdraw(a4, 1000); // In Trust::withdraw
    
    return 0;
}
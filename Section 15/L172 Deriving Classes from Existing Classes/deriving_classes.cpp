/*
    Deriving classes from existing classes:
        class Base {
            // Base class members...
        };

        class Derived: access-specifer Base {
            // Derived class members...
        };

    Access-specifiers:
        - Can be public, private, or protected
        - public:
            - Establishes "is-a" relationship between Derived and Base classes
        - private and protected:
            - Establishes derived class "has-a" base class relationship
            - "Is implemented in terms of" relationship
            - Different from composition
*/
#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main() {

    // Use the Account class
    cout << "\n===== Account =================" << endl;
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    cout << endl;

    Account *p_acc {nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    // Use the Savings Account class
    cout << "\n===== Savings Account =================" << endl;
    Savings_Account sav_acc{};
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);

    cout << endl;

    Account *p_sav_acc {nullptr};
    p_sav_acc = new Savings_Account();
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;

    cout << "\n======================================" << endl;

    return 0;
}
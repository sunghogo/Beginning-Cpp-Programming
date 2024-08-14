/*
    Using and redefining Base class methods:
        - Derived class can directly invoke Base class methods
        - Derived class can also OVERRIDE or REDEFINE Base class methods (Polymorphism)

    Static Binding of Method Calss:
        - Binding of which methods to use is done at compilation
        - C++ default binding is static
            - So Base class objects will use Base::method(), and Derived class objects will use Derived::method()
        - A more powerful approach is dynamic binding
*/

#include <iostream>
#include "Savings_Account.h"

using namespace std;

int main() {
    cout << "\n============== Account class ===================" << endl;
    Account a1 {1000.0};
    cout << a1 << endl;     // Account balance: 1000

    a1.deposit(500.0);
    cout << a1 << endl;     // Account balance: 1500

    a1.withdraw(1000);
    cout << a1 << endl;     // Account balance: 500

    a1.withdraw(5000.0);    // Insufficient funds
    cout << a1 << endl;     // Account balance: 500

    cout << "\n============== Account class ===================" << endl;
    Savings_Account s1 {1000, 5.0};
    cout << s1 << endl;     // Savings Account balance : 1000, Interest Rate: 5
    
    s1.deposit(1000);
    cout << s1 << endl;     // Sainvsg Account balance: 2050, Interest Rate: 5

    s1.withdraw(2000);
    cout << s1 << endl;     // Sacings Account balance: 50, Interest Rate: 5

    s1.withdraw(1000);      // Insufficient funds
    cout << s1 << endl;     // Sacings Account balance: 50, Interest Rate: 5

    return 0;
}
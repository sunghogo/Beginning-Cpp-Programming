/*
    Implementing Member Methods:
        - Similar to how functions are implemented with some nuance:
            - Member methods have access to member attributes
            - Can be implemented inside class declaration (implicitly inline)
            - Can be implmented outside the class declaration:
                return_type Class_Name::method_name() {
                    declaration(s);
                }
            - Can have separate specification from implementation
                - .h file for class declaration, .cpp for class implementation
    
    Separating Specification from Implementation:
        - Declare in .h file
        - Use Include Guards to ensure compiler only processes/includes the file once:
            Account.h:
            #ifndef _ACCOUNT_H_
            #define _ACCOUNT_H_
                // Account class declaration
            #endif

            OR (some compilers support #pragma, others don't)

            Account.h:
            #pragma once
            // Account class declaration

        - Implement in .cpp file
            Account.cpp:
            #include "Account.h"
            /// Account class method implementation
*/

#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    // attributes
    string name;
    double balance;

public:
    // methods
    // declared inline
    void set_balance(double bal) { balance = bal; };
    double get_balance() { return balance; };

    // methods will be declared outside the class declaration
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw (double amount);
};
 
 void Account::set_name(string n) {
    name = n;
 }

 string Account::get_name() {
    return name;
 }

 bool Account::deposit(double amount) {
    // if verify amount
    balance += amount;
    return true;
 }

 bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    return false;
 }

int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0)) cout << "Deposit OK" << endl;
    else cout << "Deposit Not Allowed" << endl;

    if (frank_account.withdraw(500.0)) cout << "Withdrawal OK" << endl;
    else cout << "Not sufficient funds" << endl;

    if (frank_account.withdraw(1000.0)) cout << "Withdrawal OK" << endl;
    else cout << "Not sufficient funds" << endl;

    return 0;
}
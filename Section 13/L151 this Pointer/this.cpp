/*
    this pointer:
        - this is a reserved keyword ('self' in other languages)
        - Contains the address of the object, aka pointer to the object
        - Can only be used in class scope
        - All member access is done via the this pointer
        - Used by the programmer to:
            - Access data members and methods (C++ allows accessing members directly by useing this behind the scenes)
            - Determine if two objects are in the same location/are the same
            - Can be dereference (*this) to yield the current object
            - Overloading operators
*/

#include <iostream>

using namespace std;

class Account {
private:
    std::string name;
    double balance;

public:
    // methods
    void set_balance(double bal);
    double get_balance();

    int compare_balance(const Account &other);
};

// void Account::set_balance(double bal) {
//     balance = bal; // this->balance is implied
// }

// void Account::set_balance(double balance) {
//     balance = balance; // which balance? The parameter due to scoping rules
// }

void Account::set_balance(double bal) {
    this->balance = balance; // Unambiguous
}

int Account::compare_balance(const Account &other) {
    if (this == &other)
        std::cout << "The same objects" << std::endl;
}

int main() {

    return 0;
}
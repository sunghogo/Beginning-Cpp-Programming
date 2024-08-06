/*
    Operator Overloading:
        - Stream insertion and extraction operators (<<, >>)
            - Doesn't make sense to implement as member methods since the left operand MUST be a user-defined class

        - Stream Insertion Operator (<<)
            std::ostream &operator<<(std::ostream &os, const Class &obj);
        
        - Stream Extraction Operator (>>)
            std::istream &operator>>(std::istream &is, Class &obj);
*/

#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
    
    MyString larry {"Larry"};
    MyString moe {"Moe"};
    MyString curly;

    cout << "Enter the third stooge's first name: ";
    cin >> curly;

    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;

    cout << "\nEnter the three stooges names seperated by a space: ";
    cin >> larry >> moe >> curly;

    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;

    return 0;
}
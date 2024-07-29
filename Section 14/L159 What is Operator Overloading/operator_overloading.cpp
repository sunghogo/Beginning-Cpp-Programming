/*
    Operator Overlaoding:
        - Using traditional operators with user-definted types
        - Allow user defined types to behave similar to bulit-in types 
        - Can make code more readable and writable
        - Must be explicitly defined (except for assignment operator)

        - What operaters can be overloaded?
            - The majority of C++ operators can be overloaded except for these:
                - scope resolution operator (::)
                - conditional operator (:?)
                - pointer to member operator (.*)
                - dot operator (.)
                - sizeof operator (sizeof)
        
        - Basic rules:
            - Precedence and ASsociativity cannot be changed
            - 'arity' cannot be changed (ex. unary, binary, etc)
            - Can't overload operators for primiitve types (ex. int, double, etc.)
            - Can't create new operators
            - [], (), ->, = operators MUST be declared as member methods
            - Other operators can be declared as member methods or  global functions
*/

#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
    MyString empty; // Default Constructor
    MyString larry("Larry"); // Overloaded Constructor
    MyString stooge(larry); // Copy Constructor

    empty.display();
    larry.display();
    stooge.display();

    return 0;
}
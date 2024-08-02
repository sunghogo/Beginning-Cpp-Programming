/*
    Operator Overloading: Move Assignment Operator ( = ):
        - You can choose to overload the move assignment operator
            - C++ will use the copy assignment operator by default
            - Move assignment operator more efficient for raw pointer members
        
        - Overloading the copy assignment operator (deep copy):
            Class Declaration:
                Type &operator=(Type &&rhs);

            Implementation:
                Type &Type::operator=(Type &&rhs) {
                    code block...
                }
*/

#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main() {
    MyString a {"Hello"};       // Overloaded Constructor
    a = MyString {"Hola"};      // Overloaded Constructor, then Move Assignment
    a = "Bonjour";              // Overloaded Constructor, then Move Assignment

    MyString empty;             // Default Constructor
    MyString larry {"Larry"};   // Overloaded Constructor
    MyString stooge {larry};    // Copy Constructor
    MyString stooges;           // Default Constructor

    empty = stooge;            // Copy Assignment Operator, stooge is a L-value

    empty = "Funny";             // Move Assignment Operator, "Funny" is a R-value

    empty.display();    // Larry : 5
    larry.display();    // Larry : 5
    stooge.display();   // Larry : 5
    empty.display();    // Larry : 5

    stooges = "Larry, Moe, and Curly";
    stooges.display();  // Larry, Moe, and Curly : 21

    vector<MyString> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");

    cout << "=== Loop 1 ====================" << endl;
    for (const MyString &s : stooges_vec)
        s.display();    // Larry : 5
                        // Moe : 3
                        // Curly : 5

    cout << "=== Loop 2 ====================" << endl;
    for (MyString &s : stooges_vec)
        s = "Changed";  // Move Assignment s.operator=("Changed")

    cout << "=== Loop 3 ====================" << endl;
    for (const MyString &s : stooges_vec)
        s.display();    // Changed : 7
                        // Changed : 7
                        // Changed : 7

    return 0;
}

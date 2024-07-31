/*
    Operator Overloading: Copy Assignment Operator ( = ):
        - C++ provides a default assignment operator used for assigning one object to another
            - Default is memberwise assignment (shallow copy)
            - Need deepy copy for raw pointer member
        - Becareful of the distinction between assignment and declaration/initialization!
        - Overloading the copy assignment operator (deep copy):
            Class Declaration:
                Type &operator=(const Type &rhs);

            Implementation:
                Type &Type::operator=(const Type &rhs) {
                    code block...
                }
*/

#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main() {
    MyString a {"Hello"};       // Overloaded Constructor
    MyString b;                 // Default Constructor
    b = a;                      // Copy Assignment b.operator=(a);,
    b = "This is a test";       // Overloaded Constructor temp = MyString("This is a test"), Copy Assignment b.operator=(temp);

    MyString empty;             // Default Constructor
    MyString larry {"Larry"};   // Overloaded Constructor
    MyString stooge {larry};    // Copy Constructor
    MyString stooges;           // Default Constructor

    empty = stooges;            // Copy Assignment Operator

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
        s = "Changed";  // Copy Assignment s.operator=("Changed")

    cout << "=== Loop 3 ====================" << endl;
    for (const MyString &s : stooges_vec)
        s.display();    // Changed : 7
                        // Changed : 7
                        // Changed : 7

    return 0;
}

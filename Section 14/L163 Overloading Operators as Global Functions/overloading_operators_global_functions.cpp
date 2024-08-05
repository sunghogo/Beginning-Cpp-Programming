/*
    Operator Overloading:
        - Overloaded operators as global functions are often declared as friend functions in class declaration
        - You can only have one overloaded operator at a time (so cannot operator overload in Both member method AND global function)

        - Unary operators as global functions (++. --, -, !)
            - Pass "int" as 2nd paramter to specify post-increment
            ReturnType operatorOp(const Type &obj);

        - Binary operators as member methods (+, -, ==, !=, <, >, etc...)
            ReturnType operatorOp(const Type &lhs, const Type &rhs);
*/

#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main() {
    cout << boolalpha << endl;

    MyString larry {"Larry"};
    larry.display(); // Larry

    larry = - larry;
    larry.display(); // larry

    MyString moe {"Moe"};
    MyString stooge = larry;

    cout << (larry == moe) << endl; // false
    cout << (larry == stooge) << endl; // true

    // MyString stooges = larry + "Moe"; // Still work
    MyString stooges = "Larry" + moe; // Now Compiles
    stooges.display();

    MyString two_stooges = moe + " " + "Larry";
    two_stooges.display();  // Moe Larry

    MyString three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display(); // Moe Larry Curly

    return 0;
}

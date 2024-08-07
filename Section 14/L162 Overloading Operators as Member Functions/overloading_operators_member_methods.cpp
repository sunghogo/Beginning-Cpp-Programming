/*
    Operator Overloading:
        - Unary operators as member methods (++. --, -, !)
            - Pass "int" as paramter to specify post-increment
            ReturnType Type::operatorOp();

        - Binary operators as member methods (+, -, ==, !=, <, >, etc...)
            ReturnType Type::operatorOp(const Type &rhs);
        
*/

#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main() {
    cout << boolalpha << endl;

    MyString larry {"Larry"};
    MyString moe {"Moe"};

    MyString stooge = larry;
    larry.display(); // Larry
    moe.display(); // Moe

    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;

    larry.display(); // Larry
    MyString larry2 = -larry;
    larry2.display(); // Larry

    MyString stooges = larry + "Moe";
    // MyString stooges = "Larry" + moe; // Compiler error since need to define non-member function
    stooges.display();

    MyString two_stooges = moe + " " + "Larry";
    two_stooges.display();  // Moe Larry

    MyString three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display(); // Moe Larry Curly

    return 0;
}

/*
    Operator Overloading:
        - Unary operators as member methods (++. --, -, !)
            - Pass "int" as paramter to specify post-increment
            ReturnType Type::operatorOp();

        - Binary operators as member methods (+, -, ==, !=, <, >, etc...)
            ReturnType Type::operatorOp(const Type &rhs);
        
*/

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

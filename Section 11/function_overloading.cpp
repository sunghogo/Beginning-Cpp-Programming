/*
    Function Overloading:
        - Function overloading is having different parameter lists for the same function
            - Tries to match exact parameter list type, then defaults to next available type coercible overload
        - Example of Polymorphism (different behavior depending on the data passed)
        - Need to prototype and define all the overloaded function versions 
            - The compiler does NOT check return types for matching, only parameter lists
            - Becareful with default arguments as compiler may not be able tell which one to use
        - C++ also provides generic function templates using the template library (which we will learn later on)

        type1 function(type param1, type param2, ...);
        type2 function(type param3, type param4, ...);

        type1 function(type param1, type param2, ...) {
            statement(s);
            return type1;
        }
        type2 function(type param3, type param4, ...) {
            statement(s);
            return type2;
        }
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
// void print(int = 100); // Compiler can't tell
// void print(char);
void print(double);
// void print(double = 125.5); // Compiler can't tell
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout << "Printing int: " << num << endl;
}

// void print (char c) {
//     cout << "Printing char: " << c << endl;
// }

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s1, string s2) {
    cout << "Printing 2 strings: " << s1 << " and " << s2 << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: ";
    for (auto s: v)  cout << s << " ";
    cout << endl;
}

int main() {
    print(100);
    print('A'); // character promoted to int/double so print ASCII 65 (is not automatically coerced to string)

    print(123.5);
    print(123.3F); // float promoted to double

    print("C-style string"); // C-style string promoted to string

    string s {"C++ string"};
    print(s);

    print("C-style string", s); // 1st C-style string promoted to string

    vector<string> three_stooges {"Larry", "Moe", "Curly"};
    print(three_stooges);

    return 0;
}
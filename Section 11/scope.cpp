/*
    Local/Block Scope vs Global Scope:
        - Variables are only active within their designated scope, and are not preserved outside it
        - Local/Block Scope: Identifiers declared in block{} or within functions (including paramters)
        - Global Scope: Identifiers declared outside any function or class that are visiable to all parts of prgoram that come after (usually used for global constants)

    Static Local Variables:
        - Use static keyword/qualifier to declare static variables whose values ARE preserved between functional calls
        - Only initialized ONCE (the first time)
*/

#include <iostream>

using namespace std;

void local_example(int x);
void global_example();
void static_local_example();

int num{300}; // Global variable - declared out side any class or function

void local_example(int x) {
    int num {1000}; // local to local_example
    cout << "\nLocal num is: " << num << " in local_example - start" << endl; // 1000
    num = x;
    cout << "\nLocal num is: " << num << " in local_example - end" << endl; // x
    // num 1 in main is not within scope so it can't be used here
}

void global_example() {
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl; // 300, then 600
    num *= 2;
    cout << "\nGlobal num is: " << num << " in global_example - end" << endl; // 600, then 1200
}

void static_local_example() {
    static int num{5000}; // local to static_local_example static - retains its value between calls
    cout << "\nLocal static num is: " << num << " in local_example - start" << endl; // 5000
    num += 1000;
    cout << "\nLocal static num is: " << num << " in local_example - end" << endl; // 6000
}

int main() {
    int num {100}; // Local to main
    int num1 {500}; // Local to main

    cout << "Local num is: " << num << " in main" << endl; // 100

    { // creates a new level of scope
        int num {200}; // local to inner block
        cout << "Local num is: " << num << " in inner block in main" << endl; // 200
        cout << "Inner block in main can see out - num 1 is: " << num1 << endl; // 500
    }

    cout << "Local num is: " << num << " in main" << endl; // 100

    local_example(10);
    local_example(20);

    global_example(); // 300, 600
    global_example(); // 600, 1200

    static_local_example(); // 5000, 6000
    static_local_example(); // 6000, 7000
    static_local_example();// 7000, 8000

    return 0;
}
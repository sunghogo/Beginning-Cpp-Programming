/*
    Pointers:
        - A variable who value is an address (of another var or func)
        - Used to:
            - Access data outside of scope
            - Operate on arrays efficiently
            - Allocate memory dynamically on heap or free store
            - Polymorphism in OO
            - Access specific memory address for embedded/systems app
    
    Declaring Pointers:
        variable_type *pointer_name {nullptr};
        - Initialize to nullptr (C+11, points to 0)

    Accessing Pointer Addresses:
        - Variables are stored in unique addresses
        - use & address unary operator to reference their address:
            pointer = &variable

    Pointer Sizes:
        - All pointers are the same size (1 word/8 bytes), but can point to types of different sizes
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    int num {10};
    cout << "Value of num is " << num << endl;
    cout << "sizeof of num is " << sizeof(num) << endl;
    cout << "Address of num is " << &num << endl;

    int *p {};
    cout << "Value of p is " << p << endl; // garbage, 0 if nullptr
    cout << "sizeof of p is " << sizeof(p) << endl;
    cout << "Address of p is " << &p << endl;

    p = nullptr;
    cout << "Value of p is " << p << endl; // 0

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};

    cout << "\nsizeof p1 is " << sizeof p1 << endl;
    cout << "sizeof p2 is " << sizeof p2 << endl;
    cout << "sizeof p3 is " << sizeof p3 << endl;
    cout << "sizeof p4 is " << sizeof p4 << endl;
    cout << "sizeof p5 is " << sizeof p5 << endl;

    int score {10};
    double high_temp {100.7};

    int *score_ptr {nullptr};

    score_ptr = &score;

    cout << "Value of score is " << score << endl;
    cout << "Address of score is " << &score << endl;
    cout << "Value of score_ptr is " << score_ptr << endl;

    // score_ptr = &high_temp; // Compiler error, type mismatch

    return  0;
}
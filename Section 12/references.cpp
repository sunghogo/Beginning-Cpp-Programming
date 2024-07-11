/*
    References:
        - An alias for a variable
        - Must be initialized to a variable when declared
            - Cannot be null
            - Cannot be made to refer a different variable after init
        - Similar to constant pointer that is automatically dereferenced
        - Used specifically to override Pass-by-value behavior
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int num {100};
    int &ref {num};

    cout << "num: " << num << endl; // 100
    cout << "ref: " << ref << endl; // 100

    cout << "\n------------------------------" << endl;
    num = 200;
    cout << "num: " << num << endl; // 200
    cout << "ref: " << ref << endl; // 200

    cout << "\n------------------------------" << endl;
    ref = 300;
    cout << "num: " << num << endl; // 300
    cout << "ref: " << ref << endl; // 300

    cout << "\n------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};

    for (auto str: stooges) str = "Funny"; // str is a COPY of each vector element
    for (auto str: stooges) cout << str << " " << endl; // No change

    cout << "\n------------------------------" << endl;
    for (auto &str: stooges) str = "Funny"; // str is now a reference of each vector element
    for (auto const &str: stooges) cout << str << " " << endl; // Elements changed

    int *ptr {&num};
    int *&ref_ptr {ptr};
    cout << &ptr << " " << ptr << " " << *ptr << endl;
    cout << &ref_ptr << " " << ref_ptr << " " << *ref_ptr << endl;

    return 0;
}
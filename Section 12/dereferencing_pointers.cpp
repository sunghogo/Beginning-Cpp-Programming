/*
    Dereferencing Pointers:
        - Dereferencing a pointer is accessing the data it is pointing to
        - Use the * dereferencing unary operator to get the value:
            *variable = value
        - Don't be confused by how pointer variables are declared using * and initialized to memory addresses, but then derefenced pointer variables then equal the pointed value
        - The * operator priority is low, with right to left associativity, so becareful when chaining methods
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int score {100};
    int *score_ptr {&score};

    cout << "*score_ptr: " << *score_ptr << endl; // 100

    *score_ptr = 200;

    cout << "*score_ptr: " << *score_ptr << endl; // 200
    cout << "score: " << score << endl; // 200

    cout << "\n--------------------------------------" << endl;
    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};

    cout << "*temp_ptr: " << *temp_ptr << endl; // 100.7
    temp_ptr = &low_temp;
    cout << "*temp_ptr: " << *temp_ptr << endl; // 37.4
    

    cout << "\n--------------------------------------" << endl;
    string name {"Frank"};
    string *string_ptr {&name};

    cout << "*string_ptr: " << *string_ptr << endl; // 100.7
    name = "James";
    cout << "*string_ptr: " << *string_ptr << endl; // James

    cout << "\n--------------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};

    vector_ptr = &stooges;

    cout << "First stooge: " << (*vector_ptr).at(0) << endl; // Larry 

    cout << "Stooges: ";
    for (auto stooge: *vector_ptr) cout << stooge << " ";
    cout << endl;

    return 0;
}
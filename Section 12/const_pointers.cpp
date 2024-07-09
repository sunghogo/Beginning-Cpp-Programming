/*
    const and Pointers:
        Can have:
            - Pointers to constants (pointed data CANNOT be changed)
                const type *ptr;
            - Constant pointers (pointer itself CANNOT be changed)
                type *const ptr;
            - Constant pointers to constants (pointer and pointed data BOTH CANNOT be changed)
                const type *const ptr;
*/

#include <iostream>

using namespace std;

int main() {
    int high_score {100};
    int low_score {65};

    // Pointers to constants
    {
        const int *score_ptr {&high_score};

        // *score_ptr = 86; // Compiler Error
        score_ptr = &low_score; // OK
        high_score = 86; // OK
    }

    // Constant Pointers
    {
        int *const score_ptr {&high_score};

        *score_ptr = 100; // OK
        // score_ptr = &low_score; // Compiler Error
        high_score = 86; // OK
    }

    // Constant Pointer to constants
    // Constant Pointers
    {
        const int *const score_ptr {&high_score};

        // *score_ptr = 100; // Compiler Error
        // score_ptr = &low_score; // Compiler Error
        high_score = 86; // OK
    }

    return 0;
}
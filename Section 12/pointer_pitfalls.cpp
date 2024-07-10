/*
    Potential Pointer Pitfalls:
        - Uninitialized pointers (Noncontrolled pointed address)
        - Dangling Pointers (Pointers pointing to released or invalid memory)
        - Not checking if new failted to allocated memory (dereferencing a null pointer will crash program)
        - Leaking memory (Forgetting to release memory or losing pointers)
*/

#include <iostream>

using namespace std;

int main() {

    // Unitiialized Pointers
    int *int_ptr; // pointing anywhere
    *int_ptr = 100; // could cause a crash if it eventually points to an important area in memory

    // Dangling pointers
    int *int_ptr1 = new int;
    int *int_ptr2 {int_ptr1};
    delete int_ptr1; // Now int_ptr2 is invalid. 

    int int_val {1};
    int_ptr2 = &int_val; // Also points to local variable which becomes invalid once stack frame disappears

    // Not check if new failed
    int *int_ptr3 = new int; // Need to handle execeptions to see if allocated correctly, otherwise nullptr
    delete int_ptr3;

    // Leaking Memory
    int *int_ptr4 = new int;
    int_ptr4 = new int; // Lost pointer to memory that was not released
    delete int_ptr4;

    return 0;
}
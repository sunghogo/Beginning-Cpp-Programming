/*
    Returning a Pointer from a Function:
        type *function();

        - Should return pointers to memory dynamically allocated in the function, or to data that was passed in
        - DON'T return a pointer to local variables (that gets destroyed alongside the stack frame)
*/

#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0) {
    int *new_storage {nullptr};
    new_storage = new int[size];
    for (size_t i {0}; i < size; i++) *(new_storage + i) = init_value;
    return new_storage;
}

void display(const int *const array, size_t size) {
    for (size_t i {0}; i < size; i++) cout << array[i] << " ";
    cout << endl;
}

int main() {
    int *my_array(nullptr);
    size_t size;
    int  int_value {};

    cout << "\nHow many integers would you like to allocate?: ";
    cin >> size;
    cout << "What value would you like them initialized to?: ";
    cin >> int_value;

    my_array = create_array(size, int_value);
    cout << "\n---------------------------------------------" << endl;

    display(my_array, size);
    delete [] my_array;

    return 0;
}
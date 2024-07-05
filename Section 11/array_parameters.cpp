/*
    Passing Array Parameters:
        - Since an array variable is equal to its memory location in memory, it is MUTABLE by functions
        - Use 'const' keyword in parameter definition to make the arguments read-only
*/

#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(const int arr[], size_t size) {
    for (size_t i {0}; i < size ; i++) cout << arr[i] << " ";
    cout << endl;
    // arr[0] = 10000; // will cause compiler error
}

void set_array(int arr[], size_t size, int value) {
    for (size_t i {0}; i < size; i++ ) arr[i] = value;
}

int main() {
    int my_scores[] {100, 98, 90, 86, 84};

    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);

    return 0;
}
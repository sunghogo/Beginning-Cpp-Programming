/*

Reverse an Array using Pointers (Challenging!)
Exercise: Array Reversal using Pointers

Specification:

Write a C++ function reverse_array that takes an integer array and its size as input and reverses the order of the elements in the array. The function should modify the array in-place.

Function Signature:

void reverse_array(int* arr, int size);
Input:

arr: A pointer to the first element of the integer array.

size: The size of the array.

Output:

The function should modify the array in-place, reversing the order of the elements. You should NOT make a copy of the original array.

Example:

int arr[] = {1, 2, 3, 4, 5};
int size = sizeof(arr) / sizeof(arr[0]);
 
reverse_array(arr, size);
 
// After the function call, the array should be reversed:
// arr[] = {5, 4, 3, 2, 1}
Constraints:

The array will always have at least one element.

You must perform the reversal in-place, without allocating extra memory.*/

// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.

#include <iostream>

using namespace std;

void swap_values(int *value_1,  int *value_2);
void reverse_array(int *arr, int size);

void swap_values(int *value_1,  int *value_2) {
    *value_1 = *value_2 - *value_1;
    *value_2 -= *value_1;
    *value_1 += *value_2;
}

void reverse_array(int *arr, int size) {
    //-- Write your code below this line
    int reverse_pos = size - 1;
    for (size_t i {0}; i < size; i++) {
        if (reverse_pos > i) {
            swap_values(arr + i, arr + reverse_pos);
            reverse_pos--;
        }
    }
}
    //-- Write your code above this line

int main() {
    int values[] {100, 90, 80, 70, 60};
    reverse_array(values, 5);

    for (size_t i {0}; i < 5; i++) cout << values[i] << " ";
    cout << endl;

    return 0;
}
/*
    Dynamic Memory Allocation:
        - Allocating memory from heap at runtime
        - Use pointers and new keyword to allocated and access heap storage:
            pointer = new datatype;
            array_pointer = new datatype[size];
        - Use delete keyword to free allocated heap storage:
            delete pointer;
            delete [] array_pointer;
        - Not releasing memory/losing heap pointers will cause Memory Leaks (will throw an exception once no more heap)
*/

#include <iostream>

using namespace std;

int main() {

    int *int_ptr {nullptr};
    int_ptr = new int;
    cout << "int_ptr: " << int_ptr << endl;
    delete int_ptr;

    size_t size {0};
    double *temp_ptr {nullptr};

    cout << "How many temps?: ";
    cin >> size;
    temp_ptr = new double[size];
    cout << "temp_ptr: " << temp_ptr << endl;
    delete [] temp_ptr;

    cout << endl;
    return 0;
}


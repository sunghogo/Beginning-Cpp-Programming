/*
    Relationship between Arrays and Pointers:
        - Value of an a array variable is the address of first element in array
        - Value of a pointer variable is an address
        - So the two can be used interchangaeably:
            - Subscript Nototation:
                array_name[index]
                pointer_name[index]
            - Offest Notation:
                *(array_name + index)
                *(pointer_name + index) 
*/

#include <iostream>

using namespace std;

int main() {

    int scores[] {100, 95, 89};
    cout << "Value of scores: " << scores << endl;

    int *score_ptr {scores};
    cout << "Value of score_ptr: " << score_ptr << endl;

    cout << "\nArray subscript notation------------------------" << endl;
    cout << "scores[0]: " << scores[0] << endl;
    cout << "scores[1]: " << scores[1] << endl;
    cout << "scores[2]: " << scores[2] << endl;
    cout << "&scores[0]: " << &scores[0] << endl;
    cout << "&scores[1]: " << &scores[1] << endl;
    cout << "&scores[2]: " << &scores[2] << endl;

    cout << "\nPointer subscript notation------------------------" << endl;
    cout << "score_ptr[0]: " << score_ptr[0] << endl;
    cout << "score_ptr[1]: " << score_ptr[1] << endl;
    cout << "score_ptr[2]: " << score_ptr[2] << endl;
    cout << "&score_ptr[0]: " << &score_ptr[0] << endl;
    cout << "&score_ptr[1]: " << &score_ptr[1] << endl;
    cout << "&score_ptr[2]: " << &score_ptr[2] << endl;

    cout << "\nPointer offset notation------------------------" << endl;
    cout << "*score_ptr: " << *score_ptr << endl;
    cout << "*(score_ptr + 1): " << *(score_ptr + 1) << endl;
    cout << "*(score_ptr + 2): " << *(score_ptr + 2) << endl;
    cout << "score_ptr: " << score_ptr << endl;
    cout << "score_ptr + 1: " << score_ptr + 1 << endl;
    cout << "score_ptr + 2: " << score_ptr + 2<< endl;

    cout << "\nArray offset notation------------------------" << endl;
    cout << "*scores: " << *scores << endl;
    cout << "*(scores + 1): " << *(scores + 1) << endl;
    cout << "*(scores + 2): " << *(scores + 2) << endl;
    cout << "scores: " << scores << endl;
    cout << "scores + 1: " << scores + 1 << endl;
    cout << "scores + 2: " << scores + 2<< endl;
}
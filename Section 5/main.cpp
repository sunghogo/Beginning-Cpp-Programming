// Seection 5
// Basic I/O using cin and cout

// preprocessor directive
#include <iostream>

// use entire std namespace
using namespace std;

// OR use specify names to use
// using std::cout;
// using std::cin;
// using std::endl;

/*
    '<<': insertion operator used in output streams (can be chained)
    '>>': extraction operator used in input streams (can be chained)

    std::endl: Also flushes the stream. which is important for buffered streams that wait until being flushed out

    std::cin: extraction ignores initial whitespace until number. Afterwards, white space SEPARATES values for extraction and automatically inputs for consecutive cin. CAREFUL WHEN EXTRACTING DIFFERENT NUMBER TYPES SIMULTANEOUSLY, A PERIOD FOR DOUBLES ACTS AS A DELIMITER FOR INTEGER TYPES. SAME THING FOR STRINGS WHEN IT EXPECTS AN NUMBER TYPE"
*/

int main() {

    // cout << "Hello World!" << endl;

    // cout << "Hello";
    // cout << "World" << endl;

    // cout << "Hello World!" << endl;
    // cout << "Hello" << "World!" << endl;
    // cout << "Hello" << "World!\n";
    // cout << "Hello\nOut\nThere\n";

    int num1, num2;
    double num3;

    // cout << "Enter an integer: ";
    // cin >> num1;
    // cout << "You entered: " << num1 << endl;

    // cout << "Enter a first integer: ";
    // cin >> num1;
    // cout << "Enter a second integer: ";
    // cin >> num2;
    // cout << "You entered: " << num1 << " and " << num2 << endl;

    // cout << "Enter 2 integers separated with a space: ";
    // cin >> num1 >> num2;
    // cout << "You entered " << num1 << " and " << num2 <<endl;

    // cout << "Enter a double: ";
    // cin >> num3;
    // cout << "You entered: " << num3 << endl;

    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Enter a double: ";
    cin >> num3;

    cout << "The integer is: " << num1 << endl;
    cout << "And the double is: " << num3 << endl;

    return 0;
}
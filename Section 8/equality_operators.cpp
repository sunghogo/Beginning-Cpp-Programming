/*
    ==  Equal Operator
    !=  Not Equal Operator

    Compares the values of 2 expressions, and evalutes to a boolean (true/1 or false/0)
*/

#include <iostream>

using namespace std;

int main() {

    bool equalResult {false};
    bool notEqualResult {false};

    int num1 {}, num2 {};

    cout << boolalpha; // flag to display true/false instead of 1/0 for booleans

    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equalResult = num1 == num2;
    notEqualResult = num1 != num2;
    cout << "Comparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " << notEqualResult << endl;

    char char1 {}, char2 {};
    cout << "Enter two characters separated by a space: ";
    cin >> char1 >> char2;
    equalResult = char1 == char2;
    notEqualResult = char1 != char2;
    cout << "Comparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " << notEqualResult << endl;

    // Be careful with floating point comparisons since they are approximations
    double double1 {}, double2 {};
    cout << "Enter two doubles separated by a space: ";
    cin >> double1 >> double2;
    equalResult = double1 == double2;
    notEqualResult = double1 != double2;
    cout << "Comparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " << notEqualResult << endl;

    // num1 will be to a double, and the comparison will work
    cout << "Enter an integer and a double separated by a space: ";
    cin >> num1 >> double1;
    equalResult = num1 == double1;
    notEqualResult = num1 != double1;
    cout << "Comparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " << notEqualResult << endl;


    cout << endl;
    return 0;
}
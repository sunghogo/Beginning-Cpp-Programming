#include <iostream>

using namespace std;

/*
    +   addition
    -   subtration
    *   multiplication
    /   division
    %   module or remainder (works only with integers)
*/

int main() {

    int num1 {200};
    int num2 {100};

    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    int result {0};
    
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
    
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    result = num2 / num1; // result is 0
    cout << num2 << " / " << num1 << " = " << result << endl;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    num1 = 10;
    num2 = 3;

    result = num1 % num2; // result is 1: 3 r1, 
    cout << num1 << " % " << num2 << " = " << result << endl;

    // Order of Operations: PEMDAS
    result = num1 * 10 + num2;

    // Integer vs FP Division
    cout << 5/10 << endl; // integer division, = 0
    cout << 5.0/10.0 << endl; // double division, = 0.5

    cout << endl;
    return 0;
}
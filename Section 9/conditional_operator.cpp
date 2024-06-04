#include <iostream>
using namespace std;

/*
    Do not nest conditional oeprators according to good coding standards
*/

int main() {
    int num {};

    cout << "Enter an integer: ";
    cin >> num;

    // if-else version
    // if (num % 2 == 0)
    //     cout << num << " is even" << endl;
    // else
    //     cout << num << " is odd" << endl;

    // conditional version
    cout << num << ((num % 2 == 0) ? " is even" : " is odd") << endl;

    int num1 {}, num2 {};

    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;

    if (num1 != num2) {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    } else {
        cout << "The numbers are the same" << endl;
    }

    cout << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int num1 {10};
    int num2 {20};

    /* Assignment operators*/
    // lhs is memory location of num1, and assigns that location to value at rhs which is literal value of 100
    num1 = 100;
    
    // Assignment operator returns value assigned
    cout << (num1 = 200) << endl;

    // Chaining operators evaluates expressions from right to left
    num1 = num2 = 1000;
    
    /* The following do not work */
    // int num3 {30};
    // num3 = "Frank";

    // const num4 {40}
    // num4 = 100;

    // int num5;
    // 100 = num5;

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;
    return 0;
}
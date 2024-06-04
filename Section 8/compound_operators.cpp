/*
    +=      lhs = lhs + (rhs);
    -=      lhs = lhs - (rhs);
    *=      lhs = lhs * (rhs);
    /=      lhs = lhs / (rhs);
    %=      lhs = lhs % (rhs);
    >>=     lhs = lhs >> (rhs);
    <<=     lhs = lhs << (rhs);
    &=      lhs = lhs & (rhs);
    |=      lhs = lhs ^ (rhs);
    ^=      lhs = lhs | (rhs);
*/

#include <iostream>

using namespace std;

int main() {
    int a {1}, b{2}, c{3};

    int items {3};
    double cost {5.0}, tax {0.06};

    a *= b + c; // a = a * (b + c);

    cost += items * tax; // cost = cost + (items * tax);

    cout << endl;
    return 0;
}
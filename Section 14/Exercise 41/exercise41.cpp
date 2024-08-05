/*
Operator Overloading as Member Functions
Given the provided Money class,  please add the overloaded equality operators == and !=

These overloaded operators should return a bool and should be implemented as member functions.

Given 2 Money objects, consider them to be equal if both the dollars and cents attributes are the same for both objects.

First, add the overloaded operator function declarations to the Money class declaration in Money.h

Second, add the overloaded operator function definitions in Money.cpp

These overloaded functions should not modify the objects in any way.

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
*/
#include <iostream>
#include "Money.h"

using namespace std;

int main() {
    Money money1 {10, 50};
    Money money2 {5, 25};
    Money money3 {money1};

    cout << boolalpha << endl;
    cout << (money1 == money2) << endl;
    cout << (money1 != money2) << endl;
    cout << (money1 == money3) << endl;
    cout << (money1 != money3) << endl;
    
    return 0;
}
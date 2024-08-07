/*
Operator Overloading the Stream Insertion Operator
Given the provided Money class,  please add the overloaded stream insertion  << operator so that it displays a Money object on a output stream as follows.

If the Money object models 1 dollar and 70 cents, the output should be:

Money amount {1, 70};
std::cout << amount;
dollars: 1 cents: 70 ,no '\n' or endl should be added.

You ONLY need to write the overloaded operator function, our automated tester will create the object and test it.

This overloaded operator should return a reference to a std::ostream object and should be implemented as a non-member friend function.

First, add the overloaded friend operator function declaration to the Money class declaration in Money.h

Second, add the overloaded operator function definition in Money.cpp

This overloaded operator function should not modify the Money object in any way.

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
*/
#include <iostream>
#include "Money.h"

using namespace std;

int main() {
    Money money1 {10, 50};

    cout << money1;
        
    return 0;
}
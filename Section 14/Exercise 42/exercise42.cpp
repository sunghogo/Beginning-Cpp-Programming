/*
Operator Overloading as Non-member Functions
Given the provided Money class,  please add the overloaded  + operator so that it will add two Money objects together and return a Money object representing their sum.

This overloaded operator should return a Money object and should be implemented as a non-member friend function.

First, add the overloaded operator function declaration to the Money class declaration in Money.h

Second, add the overloaded operator function definition in Money.cpp

This overloaded operator function should not modify the objects in any way.

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
*/
#include <iostream>
#include "Money.h"

using namespace std;

int main() {
    Money money1 {10, 50};
    Money money2 {5, 75};
    Money money3 = money1 + money2;

    cout << "Dollars: " << money3.get_dollars() << ", " << "Cents: " << money3.get_cents() << endl;
    
    return 0;
}
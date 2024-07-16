/*
Add an Overloaded Constructor to an Existing Class
Given the Dog class defined in Dog.h, add an overloaded constructor that expect a std::string and int as parameters.

The constructor should allow us to create  Dog objects as follows:

Dog fido {"Fido", 4};
Dog spot {"Spot", 5};
Please add your code to the Dog.h file.

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
*/

#include <iostream>
#include "Dog.h"

using namespace std;

int main() {
    Dog dog;
    cout << dog.get_name() << endl;
    cout << dog.get_age() << endl;

    Dog fido {"Fido", 4};
    cout << fido.get_name() << endl;
    cout << fido.get_age() << endl;

    Dog spot {"Spot", 5};
    cout << spot.get_name() << endl;
    cout << spot.get_age() << endl;
    
    return 0;
}
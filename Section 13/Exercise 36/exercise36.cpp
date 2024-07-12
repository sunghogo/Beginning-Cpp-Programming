#include <iostream>
#include "Dog.h"

using namespace std;

int main() {
    Dog dog;

    dog.set_name("Spotty");
    cout << dog.get_name() << endl;

    dog.set_age(6);
    cout << dog.get_age() << endl;

    return 0;
}
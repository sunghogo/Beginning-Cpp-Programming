#include <iostream>
#include "Dog.h"

using namespace std;

int main() {
    Dog dog;

    dog.set_age(5);
    cout << dog.get_human_years() << endl;

    cout << dog.speak() << endl;

    return 0;
}
/*
    Reference for C++ Standard Library Headers:
        https://en.cppreference.com/w/cpp/header
*/

#include <iostream>
// Use random header file for more precise random numbers
#include <cstdlib> // required for rand()
#include <ctime> // rewuired for time()

using namespace std;

int main() {

    int random_number {};
    size_t count {10};  // number of random numbers to generate
    int min {1}; // lower bound (inclusive)
    int max {6}; // upper bound (inclusive)

    // seed the random nunmber generator
    // If you don't seed the generator you will get the same sequence random numbers every run
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));

    for (size_t i {1}; i <= count; i++) {
        random_number = rand() % max + min; // generate a random_number [min, max]
        cout << random_number << endl;
    }

    cout << endl;
    return 0;
}
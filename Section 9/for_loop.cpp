#include <iostream>
#include <vector>
using namespace std;

/*
    for (initialization; condition; increment) {
        statement;
    }

    for Loop:
        Initialization: initialize int i {0} or assign int i = 0
        Condition: use < and >, or <= and >=
        Increment: ++i, i++ is the same

    You can initialize and increment multiple variables, separated with a ',' (Right to Left Associativity, and the result of comma operator is leftmost expression)

    for (;;){} is an endless loop, but omitting expressions is not best practices
*/

int main() {
    for (int i {1}; i <= 10; i++)
        cout << i << endl;

    for (int i {1}; i <= 10; i+=2)
        cout << i << endl;

    for (int i {10}; i > 0; i--) {
        cout << i << endl;
    }
    cout << "Blastoff!" << endl;

    for (int i {10}; i <= 100; i+=10) {
        if (i % 15 == 0)
            cout << i << endl;
    }

    for (int i{1}, j{5}; i <= 5; i++, j++) {
        cout << i << " + " << j << " = " << i + j << endl;
    }

    for (int i{1}; i <= 100; i++) {
        cout << i << ((i % 10 == 0) ? '\n' : ' ');
    }

    // vector.size() is an unsigned integer
    vector<int> nums {10, 20, 30, 40, 50};
    for (unsigned i{0}; i < nums.size(); i++)
        cout << nums.at(i) << endl;

    cout << endl;
    return 0;
}
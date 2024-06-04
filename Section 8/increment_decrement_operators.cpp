/*
    ++  Increment Operator
    --  Decrement Operator

    Increments/Decrements by 1
    Can used with integers, floating points, and pointers

    ++num   Prefix
    num++   Postfix

    Don't overuse this operator!
    Never use it twice for same variable in same statement! Behavior is undefined!!!
*/

#include <iostream>

using namespace std;

int main() {

    int counter {10};
    int result {0};

    // Example 1 - simple increment
    cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    counter ++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;

    // Example 2 - preincrement
    counter = 10;
    result = 0;

    cout << "\nCounter: " << counter << endl;

    // Preincrement will increment counter before result is assigned to counter (increment then statement)
    result = ++counter; // Note the preincrement
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    // Example 3 - postincrement
    counter = 10;
    result = 0;

    cout << "\nCounter: " << counter << endl;

    // Postincrement will assign result to counter first before incrementing counter (statement then cinrement)
    result = counter++; // Note the preincrement
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    // Example 4
    counter = 10;
    result = 0;

    cout << "\nCounter: " << counter << endl;

    result = ++counter + 10; // result = counter + 10, but increment counter before this statement
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    
    // Example 5
    counter = 10;
    result = 0;

    cout << "\nCounter: " << counter << endl;

    result = counter++ + 10; // result = counter + 10, and then increment counter after this statement
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;


    cout << endl;
    return 0;
}
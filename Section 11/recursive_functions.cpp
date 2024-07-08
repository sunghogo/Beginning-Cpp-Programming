/*
    Recursive Functions:
        - Functions that calls itself (directly or indirectly)
        - Recursive Problem Solving:
            - Base case
            - Divide rest of problem in to subproblems and do recursive calls
            - Unwind stack
    
    Recursion Notes:
        - Infinite recursion leads to stack overflow
        - Recursion can be resource intensive
            - Recursive answers can be implemented iteratively
*/

#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n);
unsigned long long factorial(unsigned long long n);

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1) return n; // base cases
    return fibonacci(n-1) + fibonacci(n-2); // recursion
}

unsigned long long factorial(unsigned long long n) {
    if (n == 0) return 1; // base case
    return n * factorial(n-1); // recursive case
}


int main() {
    cout << fibonacci(5) << endl; // 5
    cout << fibonacci(30) << endl; // 832040
    cout << fibonacci(40) << endl; // 102334155, also slow

    cout << factorial(3) << endl; // 6
    cout << factorial(8) << endl; // 40320
    cout << factorial(12) << endl; // 479001600
    cout << factorial(20) << endl; // 2432902008176640000
}



/*
Udemy
Beginning C++ Programming - From Beginner to Beyond
Implementing a Recursive Function - Sum of Digits
Problem Title: Sum of Digits using Recursion

Problem Description:

Write a C++ program to find the sum of digits of a number using recursion.

You need to implement the function int sum_of_digits(int n) that takes an integer n as an argument and returns the sum of its digits.

Function Signature:

int sum_of_digits(int n)

Input:

An integer

Output:

Return the sum of the digits of n.

Example:

Input:

n = 1234

Output:

10

Explanation:

The sum of digits of 1234 is 1 + 2 + 3 + 4 = 10.

Here are a few more examples:

Test Case 1:

Input: n = 5678

Output: 26

Test Case 2:

Input: n = 9999

Output: 36

Test Case 3:

Input: n = 1000

Output: 1
*/

#include <iostream>
#include <string>

using namespace std;

int sum_of_digits(int n) {
    // Write your code below this line
    if (n < 10) return n;
    return n % 10 + sum_of_digits(n / 10);
    
    
    // Write your code above this line
}

int main() {
    cout << sum_of_digits(1234) << endl; // 10
    cout << sum_of_digits(5768) << endl; // 26
    cout << sum_of_digits(9999) << endl; // 36
    cout << sum_of_digits(1000) << endl; // 1

    return 0;
}
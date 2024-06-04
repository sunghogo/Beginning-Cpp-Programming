/*
    Lower Types: Hold smaller values
    Higher Types: Hold larger values

    Type Coercion: conversion of one operand to another data type
    Promotion: conversion to a higher type (lower op higher)
    Demotion: conversion to a lower  (higher assign lower)
    
    static_cast<type>(variable) to cast to a different type
    (type)variable casting in C does not check if casting is valid, old so do not use
*/

#include <iostream>

using namespace std;

int main() {
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    total = num1 + num2 + num3;

    double average {0.0};
    average = static_cast<double>(total) / count;

    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;


    cout << endl;
    return 0;
}
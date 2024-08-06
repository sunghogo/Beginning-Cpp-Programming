#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>

class MyString {
    // Overloaded Operators as Member Methods
    friend MyString operator-(const MyString &obj);   // Make lowercase
    friend bool operator==(const MyString &lhs, const MyString &rhs);   // String compare
    friend MyString operator+(const MyString &lhs, const MyString &rhs); // Concatenate

    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs); // Stream Insertion
    friend std::istream &operator>>(std::istream &in, MyString &rhs); // Stream Extraction

private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    MyString();                         // Default Constructor
    MyString(const char *s);            // Overloaded Constructor
    MyString(const MyString &source);   // Copy Constructor
    MyString(MyString &&source);        // Copy Constructor
    ~MyString();                        // Destructor

    // Overloaded Assignment Operators
    MyString &operator=(const MyString &rhs);   // Copy Assignment
    MyString &operator=(MyString &&rhs);        // Move Assignment
    
    // Methods
    void display() const;

    // Getters
    int get_length() const;
    const char *get_str() const;
};

#endif
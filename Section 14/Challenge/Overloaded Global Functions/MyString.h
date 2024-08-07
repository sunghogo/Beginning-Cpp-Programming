#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>

class MyString {
    // Overloaded Operators Global Functions
    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs); // Overloaded Stream Insertion
    friend std::istream &operator>>(std::istream &in, MyString &rhs); // Overloaded Stream Extraction

    friend MyString operator-(const MyString &obj); // Return Lowercase
    friend MyString &operator++(MyString &obj); // Make Uppercase Prefix
    friend MyString operator++(MyString &obj, int); // Make Uppercase Postfix
    friend bool operator==(const MyString &lhs, const MyString &rhs); // Equal
    friend bool operator!=(const MyString &lhs, const MyString &rhs); // Not Equal
    friend bool operator<(const MyString &lhs, const MyString &rhs); // Less than
    friend bool operator>(const MyString &lhs, const MyString &rhs); // Greater than
    friend MyString operator+(const MyString &lhs, const MyString &rhs); // Concatenation
    friend MyString operator*(const MyString &obj, size_t num); // Duplication
    friend MyString &operator+=(MyString &lhs, const MyString &rhs); // Concatenation Assignment
    friend MyString &operator*=(MyString &obj, size_t num); // Duplication Assignment

private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    // Constructors
    MyString(); // Default
    MyString(const char *s); // Overloaded
    MyString(const MyString &source); // Copy
    MyString(MyString &&source); // Move 
    ~MyString(); // Destructor

    // Overloaded Operators Member Methods
    MyString &operator=(const MyString &rhs); // Copy Assignment
    MyString &operator=(MyString &&rhs); // Move Assignment
    // Methods
    void display() const;

    // Getters
    int get_length() const;
    char *get_str() const;
};

#endif
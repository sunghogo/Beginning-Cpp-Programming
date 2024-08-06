#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>

class MyString {
    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs); // Overloaded Stream Insertion

private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    // Constructors
    MyString(); // Default
    MyString(const char *s); // Overloaded
    MyString(const MyString &source); // Copy
    MyString(MyString &&source); // Move 
    ~MyString(); // Destructor

    // Overloaded Operators
    MyString &operator=(const MyString &rhs); // Copy Assignment
    MyString &operator=(MyString &&rhs); // Move Assignment
    

    // Methods
    void display() const;

    // Getters
    int get_length() const;
    char *get_str() const;
};

#endif
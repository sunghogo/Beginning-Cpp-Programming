#include <cstring>
#include <iostream>
#include "MyString.h"

// Default Constructor
MyString::MyString() 
    : str {nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded Constructor
MyString::MyString(const char *s)
    : str {nullptr} {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

// Copy Constructor
MyString::MyString(const MyString &source) 
    : str {nullptr} {
    str = new char [std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    std::cout << "Copy Constructor used" << std::endl;
}

// Move Constructor
MyString::MyString(MyString &&source)
    : str {source.str} {
    source.str = nullptr;
    std::cout << "Move Constructor used" << std::endl;
}

// Destructor
MyString::~MyString() {
    if (str == nullptr) {
        std::cout << "Destructor called for MyString : nullptr" << std::endl;
    } else {
        std::cout << "Destructor called for MyString : " << str << std::endl;
    }
    delete [] str;
}

// Copy Assignment
MyString &MyString::operator=(const MyString &rhs) {
    std::cout << "Copy Assignemnt" << std::endl;
    if (this == &rhs) 
        return *this;
    
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

// Move Assignment
MyString &MyString::operator=(MyString &&rhs) {
    std::cout << "Move Assignemnt" << std::endl;
    if (this == &rhs) 
        return *this;

    delete [] str;    
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Methods
void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// Getter
int MyString::get_length() const { return std::strlen(str); }

const char *MyString::get_str() const { return str; }

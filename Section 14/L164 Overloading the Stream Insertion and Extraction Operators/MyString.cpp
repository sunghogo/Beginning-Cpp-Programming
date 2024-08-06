#include <cstring>
#include <iostream>
#include <limits>
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

// Make lowercase
MyString operator-(const MyString &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    for (size_t i = 0; i < std::strlen(obj.str) + 1; i++)
        buff[i] = std::tolower(obj.str[i]);
    MyString temp {buff};
    delete [] buff;
    return temp;
}  

// Equality
bool operator==(const MyString &lhs, const MyString &rhs) {
    return std::strcmp(lhs.str, rhs.str) == 0;
}   

// Concatenate
MyString operator+(const MyString &lhs, const MyString &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    MyString temp {buff};
    delete [] buff;
    return temp;
}

// Overloaded Stream Insertion
std::ostream &operator<<(std::ostream &os, const MyString &rhs) {
    os << rhs.str;
    return os;
}

// Overloaded Stream Extraction
std::istream &operator>>(std::istream &in, MyString &rhs) {
    char *buff = new char[1000];
    // in >> buff; // Compiler error
    in.getline(buff, 1000); // Can no longer chain extractions
    rhs = MyString {buff};
    delete [] buff;
    return in;
}

// Methods
void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// Getter
int MyString::get_length() const { return std::strlen(str); }

const char *MyString::get_str() const { return str; }

#include <cstring>
#include "MyString.h"

// Constructors
// Default
MyString::MyString() 
    : str {nullptr} {
        str = new char[1];
        *str = '\0';
    }

// Overloaded
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

// Copy
MyString::MyString(const MyString &source) 
    : str {nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
    }

// Move
MyString::MyString(MyString &&source)
    : str {source.str} {
        source.str = nullptr;
    }

// Destructor
MyString::~MyString() {
        delete [] str;
}

// Overloaded Operators
// Assignment Copy
MyString &MyString::operator=(const MyString &rhs) {
    if (this == &rhs) 
        return *this;

    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);   
    return *this;
}

// Assignment Move
MyString &MyString::operator=(MyString &&rhs) {
    if (this == &rhs) 
        return *this;

    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Methods
// Display
void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// Getter
int MyString::get_length() const {
    return std::strlen(str);
}

char *MyString::get_str() const {
    return str;
}
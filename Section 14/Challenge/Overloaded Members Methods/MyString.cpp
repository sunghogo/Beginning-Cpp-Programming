#include <cstring>
#include "MyString.h"

// Overloaded Stream Insertion
std::ostream &operator<<(std::ostream &os, const MyString &rhs) {
    os << rhs.str;
    return os;
}

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

// Return Lowercase
MyString MyString::operator-() const {
    char *buff = new char[std::strlen(str) + 1];
    for (size_t i {0}; i < std::strlen(str); i ++)
        buff[i] = std::tolower(str[i]);
    MyString temp {buff};
    delete [] buff;
    return temp;
}

// Make Uppercase Prefix
MyString &MyString::operator++() {
    for (size_t i {0}; i < std::strlen(str); i++)
        str[i] = std::toupper(str[i]);
    return *this;
}

// Make Uppercase Postfix
MyString MyString::operator++(int)  {
   MyString temp (*this);       // make a copy
   operator++();                // call pre-increment - make sure you call pre-increment!
   return temp;                 // return the old value
}

// Equality
bool MyString::operator==(const MyString &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}

// Not Equal
bool MyString::operator!=(const MyString &rhs) const {
    return (std::strcmp(str, rhs.str) != 0);
} 

// Less than
bool MyString::operator<(const MyString &rhs) const {
    return (std::strcmp(str, rhs.str) < 0);
}

// Greater than
bool MyString::operator>(const MyString &rhs) const {
    return (std::strcmp(str, rhs.str) > 0);
} 

// Concatenation
MyString MyString::operator+(const MyString &rhs) const {
    if (rhs.str[0] == '\0')
        return *this;

    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    MyString temp {buff};
    delete [] buff;
    return temp;
} 

// Duplication
MyString MyString::operator*(size_t num) const {
    if (num <= 0)
        return MyString();
    else if (num == 1)
        return *this; 

    char *buff = new char[std::strlen(str) * num + 1];
    std::strcpy(buff, str);
    for (size_t i {1}; i < num; i++)
        std::strcat(buff, str);
    MyString temp {buff};
    delete [] buff;
    return temp;

    // OR
    // MyString temp;
    // for (size_t i {1}; i < num; i++)
    //     temp = temp + *this;
    // return temp;
} 

// Concatenation Assignment
MyString &MyString::operator+=(const MyString &rhs) {
    *this = *this + rhs;
    return *this;
} 

// Duplication Assignment
MyString &MyString::operator*=(size_t num) {
    *this = *this * num;
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
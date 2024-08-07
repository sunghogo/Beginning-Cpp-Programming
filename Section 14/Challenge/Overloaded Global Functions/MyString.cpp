#include <cstring>
#include "MyString.h"

class MyString;

// Overloaded Operators Glboal Functions
// Overloaded Stream Insertion
std::ostream &operator<<(std::ostream &os, const MyString &rhs) {
    os << rhs.str;
    return os;
}

// Overloaded Stream Extraction
std::istream &operator>>(std::istream &in, MyString &rhs) {
    char *buff = new char[1000];
    // in >> buff; // Compiler error
    // in.getline(buff, 1000); // Can no longer chain extractions
    
    // Hacky way to get this to work since istream extraction is not working with char*
    std::string buffer; 
    in >> buffer;
    std::strcpy(buff, buffer.c_str());
    
    rhs = MyString {buff};
    delete [] buff;
    return in;
}

// Return Lowercase
MyString operator-(const MyString &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    for (size_t i {0}; i < std::strlen(obj.str); i ++)
        buff[i] = std::tolower(obj.str[i]);
    MyString temp {buff};
    delete [] buff;
    return temp;
}

// Make Uppercase Prefix
MyString &operator++(MyString &obj) {
    for (size_t i {0}; i < std::strlen(obj.str); i++)
        obj.str[i] = std::toupper(obj.str[i]);
    return obj;
}

// Make Uppercase Postfix
MyString operator++(MyString &obj, int)  {
   MyString temp (obj);         // make a copy
   ++obj;                       // call pre-increment - make sure you call pre-increment!
   return temp;                 // return the old value
}

// Equality
bool operator==(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Not Equal
bool operator!=(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str) != 0);
} 

// Less than
bool operator<(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str) < 0);
}

// Greater than
bool operator>(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str) > 0);
} 

// Concatenation
MyString operator+(const MyString &lhs, const MyString &rhs) {
    if (rhs.str[0] == '\0')
        return lhs;

    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    MyString temp {buff};
    delete [] buff;
    return temp;
} 

// Duplication
MyString operator*(const MyString &obj, size_t num) {
    if (num <= 0)
        return MyString();
    else if (num == 1)
        return obj; 

    char *buff = new char[std::strlen(obj.str) * num + 1];
    std::strcpy(buff, obj.str);
    for (size_t i {1}; i < num; i++)
        std::strcat(buff, obj.str);
    MyString temp {buff};
    delete [] buff;
    return temp;

    // OR
    // MyString temp;
    // for (size_t i {1}; i < num; i++)
    //     temp = temp + obj;
    // return temp;
} 

// Concatenation Assignment
MyString &operator+=(MyString &lhs, const MyString &rhs) {
    lhs = lhs + rhs;
    return lhs;
} 

// Duplication Assignment
MyString &operator*=(MyString &obj, size_t num) {
    obj = obj * num;
    return obj;
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

// Overloaded Operators Member Methods
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
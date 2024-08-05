#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString {
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
    
    // Overloaded Operators as Member Methods
    MyString operator-() const;                     // Make lowercase
    MyString operator+(const MyString &rhs) const;  // Concatenate
    bool operator==(const MyString &rhs) const;     // String compare
    
    // Methods
    void display() const;

    // Getters
    int get_length() const;
    const char *get_str() const;
};

#endif
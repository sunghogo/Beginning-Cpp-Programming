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

    MyString &operator=(const MyString &rhs);   // Copy Assignment
    MyString &operator=(MyString &&rhs);        // Move Assignment
    
    // Methods
    void display() const;

    // Getters
    int get_length() const;
    const char *get_str() const;
};

#endif
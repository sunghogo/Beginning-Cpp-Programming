#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString {
private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    MyString();                         // Default Constructor
    MyString(const char *s);            // Overloaded Constructor
    MyString(const MyString &source);   // Copy Constructor
    ~MyString();                        // Destructor

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif
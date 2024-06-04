/*
    std::string is a Class in the Standard Template Library
        #include <stirng>
        std namespace
        -   contiguous in memory
        -   dynamic size
        -   work with input and output streams
        -   lots of useful member functions
        -   our familiar operators can be used (+, =, <, <=, >, >=, +=, ==, !=, [], ...)
        -   can be easily converted into C-style Strings if needed
        -   safer

    std::string Initialization:
        -   string s1;                  // Empty
        -   string s2 {"Frank"};        // Frank
        -   string s3 {s2};             // Frank
        -   string s4 {"Frank", 3}      // Fra
        -   string s5 {s3, 0, 2}        // Fr
        -   string s6(3, 'X');          // XXX

    Concatenation:
        + +=
        -   Cannot concatenate two C-style Strings (mixed is ok since C-style string will implicit coerce to string object):
            string sentence = "Hello " + "World!"; // Doesn't compile

    Accesing characters:
        -   array indexing []
        -   vector method .at()
    
    Comparison Operators:
        == != > >= < <=
        -   Cannot compare two C-Style Strings
        -   Less/Greater operators compare lexcial/ASCII values of characters

    Methods:
        .subtr(start_index, length); returns substring
        .find("search string/char", start_index); return beginning index of found string/char, or string::npos if no position
        .erase(start_index, length); MUTATES and returns new string
        .clear() MUTATES and returns empty string
        .length() returns length of string

    Functions:
        getline(I/O stream, string_variable, 'char_to_stop_at')




*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {

    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; // Copy of Apple
    string s6 {s1, 0, 3}; // App
    string s7(10, 'X'); // XXXXXXXXXX

    cout << s0 << endl; // No garbage
    cout << s0.length() << endl; // Empty string

    // Initialization
    cout << "\nInitialization" << "\n====================================" << endl;
    cout << "s1 is initialized to: " << s1 << endl;
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl;

    // Comparisons
    cout << "\nComparison" << "\n====================================" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;

    // Assignment
    cout << "\nAssignemnt" << "\n====================================" << endl;
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;

    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl;
    s3[0] = 'C';
    cout << "s3 changed first letter to 'C': " << s3 << endl;
    s3.at(0) = 'P';
    cout << "s3 changed first letter to 'P': " << s3 << endl;

    // Concatenation
    cout << "\nConcatenation" << "\n====================================" << endl;
    s2 = "Banana";
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl;

    // s3 = "nice" + " cold" + s1 + " juice"; // Compilation error

    // for Loop
    cout << "\nLooping" << "\n====================================" << endl;
    s1 = "Apple";
    for (size_t i {0}; i < s1.length(); i++) {
        cout << s1.at(i);
    }
    cout << endl;

    // Range-based for loop
    for (char c: s1) {
        cout << c;
    }
    cout << endl;

    // Substring
    cout << "\nSubstring" << "\n====================================" << endl;
    s1 = "This is a test";
    cout << s1.substr(0, 4) << endl;
    cout << s1.substr(5, 2) << endl;
    cout << s1.substr(10, 4) << endl;


    // erase
    cout << "\nErase" << "\n====================================" << endl;
    s1 = "This is a test";
    s1.erase(0, 5);
    cout << "s1 is now: " << s1 << endl;

    // getline
    cout << "\ngetline" << "\n====================================" << endl;
    string full_name {};
    cout << "Enter your full: ";
    getline(cin, full_name);
    cout << "Your full name is: " << full_name << endl;

    // find
    cout << "\nfind" << "\n====================================" << endl;
    s1 = "The secret word is Boo";
    string word {};

    cout << "Enter the word to find: ";
    cin >> word;
    size_t position = s1.find(word);
    if (position != string::npos) {
        cout << "Found " << word << " at position: " << position << endl;
    } else {
        cout << "Sorry, " << word << " not found" << endl;
    }


    cout << endl;
    return 0;
}
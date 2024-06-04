/*
    Sequence of characters:
        - contiguous in memory
        - implemented as an array of characters
        - terminated by a null character ('\0')
        - zero or null terminated string

    String Literal:
        - sequence of characters in double quotes
        - constant
        - automatically terminated with null character
    
    *array names and literal evaluate to their location in memory

    #include <cstring>
        - strcpy(str, "Hello ");  // copy
        - strcat(str, "there ");    // concat
        - strlen(str);  // length
        - strcmp(str, "Another ");  // bool compare

    #include <cstdlib>
        - conert strings to other types but all work with null terminated strings


*/

#include <iostream>
#include <cstring>  // for c-style string functions
#include <cctype>   // for character-based functions

using namespace std;

int main() {
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    // cout << first_name; // Will likely display gabarge!

    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;

    // strlen() returns type size_t (unsigned int/long/etc. depending on system)
    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "and your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;

    strcpy(full_name, first_name);  // copy first_name to full_name
    strcat(full_name, " "); // concatenate full_name and a space
    strcat(full_name, last_name);   // concatenate last_name to full_name
    cout << "Your full name is " << full_name << endl;

    // Extracts until first white space delimiter
    // cout << "Enter your full name: ";
    // cin >> full_name;
    // cout << "Your full name is " << full_name << endl;

    // cin.getline(var, char_max) will get the full string
    // cin.ignore(char_max, '\n') will ignore up to the first '\n' (left over from previous cin input)
    cout << "\nEnter your full name: ";
    cin.ignore(50, '\n');
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;

    strcpy(temp, full_name);

    // need to use size_t i due to strlen
    for(size_t i {0}; i < strlen(full_name); i++) {
        if (isalpha(full_name[i])) {
            full_name[i] = toupper(full_name[i]);
        }
    }
    cout << "Your full name is " << full_name << endl;

    // strcmp() return 0 if strings are the same
    if (strcmp(temp, full_name) == 0) {
        cout << temp << " and " << full_name << " are the same" << endl;
    } else {
        cout << temp << " and " << full_name << " are different" << endl;
    }

    // strcmp() > 0 if 1st string lexically comes before 2nd string
    // strcmp() < 0 if 2nd string lexically comes bafore 1st string
    cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;

    cout << endl;
    return 0;
}
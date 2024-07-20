/*
    Structs vs Classes:
        - struct comes from C programming language as a container for data
            - Essentially the same as a class except all members are public by default (vs class where members are private by default)
    
    General Guidelines:
        - struct:
            - use struct for passive data objects with public access
            - Don't declare methods in struct
        - class:
            - use class for active objects with private access
            - Implement getters/setters as needed
            - Implement member methods as needed
*/

#include <iostream>
#include <string>

using namespace std;

class PersonClass {
    std::string name;
    std::string get_name() { return name; }
};

struct PersonStruct {
    std::string name;
    std::string get_name() { return name; }
};

int main() {
    PersonClass c;
    // c.name = "Frank"; // Compiler Error - private
    // cout << c.get_name() << endl; // Compiler Error - private

    PersonStruct s;
    s.name = "Frank";
    cout << s.get_name() << endl;


    return 0;
}
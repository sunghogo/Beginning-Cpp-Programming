/*
    Class Member Access Modifiers:
        - public: Accessible everywhere
        - private: Accessible onlu by members or friends of the class (default for class members)
        - protected: Used with inheritance

        class Class_Name {
        public:
            // declaration(s);
        priavte:
            // declaration(s);
        protected:
            // declaration(s);
        }

        - Using restricting modifiers narrows down how members are modified, making debugging easier
*/

#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    // attributes
    string name {"Player"};
    int health;
    int xp;
public:
    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl;};
    bool is_dead();
};

int main() {
    Player frank;
    // frank.name = "Frank"; // Compiler error since private
    // cout << frank.heatlh << endl; // Compiler error since private
    frank.talk("Hello there");

    return 0;
}
/*
    Copy Constructor:
        - When objects are copied, C++ must create a new object from an existing object
        - Copies of objects are made:
            - Passing an object by value for function parameters
            - Returning an object by value from functions
            - Constructing one object based on another of the same class
        - C++ compiler will define its own copy constructor if you don't
            - Copies the values of each data member to the new object (default memberwise copy)
            - Becareful with raw pointer attributes, as only the pointer will be compied instead of what it is pointing to (shallow copy)
        - Best practices:
            - Provide a user-defined copy structor if your class has raw pointer members
            - Provide the copy constructor with a const reference parameter
            - Use STL classes as they already provide copy constructors
            - Avoid using raw pointer data members if posisble

        Class_Name::Class_Name(const Class_Name &source) {
            // code or initialization list to copy the object...
        }
*/

#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }

    Player(std::string name_val = "None", int health_val = 100, int xp_val = 0);
    // Copy constructor
    Player(const Player &source);
    // Destructor
    ~Player();
};

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name {name_val}, health {health_val}, xp {xp_val} 
{
    cout << "Three-args constructor for" << name << endl;
}

Player::Player(const Player &source) 
    // : name {source.name}, health {source.health}, xp {source.xp} // Initialization List
    : Player {source.name, source.health, source.xp} // Can also do delegation
{
    cout << "Copy Constructor - made copy of: " << source.name << endl;
}

Player::~Player() {
    cout << "Destructor called for: " << name << endl; 
}

void display_player(Player p) {
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}

int main() {
    Player empty {"XXXXX", 100, 50};

    Player my_new_object {empty}; // Makes copy

    display_player(empty); // Makes copy then destroys it once stack frame ends

    Player frank {"Frank"};
    Player hero {"Hero", 200};
    Player villian {"Villian", 100, 55};


    return 0;
} 
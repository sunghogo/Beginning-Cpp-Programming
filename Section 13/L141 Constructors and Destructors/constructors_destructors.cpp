/*
    Constructors:
        - Sepcial member methods invoked during object creation:
            - Same name as the class
            - No return type specified
            - Can be overloaded
        - Useful for initlaization

    Destructors:
        - Special member method invoked automatically during object destruction:
            - Same name as the class preceded with a ~
            - No return type or parameters
            - Cannot be overload, only 1 destructor allowed per class
        - Usefl for releasing memory and other resources
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
    void set_name(std::string name_val) {
        name = name_val; 
    }

    // Overloaded Constructors
    Player() {
        cout << "No args constructor called" << endl;
    }
    Player(std::string name) {
        cout << "String arg constructor called" << endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three arg constructors called" << endl;
    }
    ~Player() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {

    {
        Player slayer; // No args constructor
        slayer.set_name("Slayer");
    }   // Object destroyed, destructor called

    {
        Player init {"Init"}; // String args constructor
        init.set_name("Init");
    }   // Object destroyed, destructor called

    {
        Player frank; // No args constructor
        frank.set_name("Frank"); 
        Player hero("Hero"); // String arg constructor
        hero.set_name("Hero"); 
        Player villian("Villan", 100, 12); // Three arg constructor
    } // Objects are destroyed in REVERSE order

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;

    return 0;
}
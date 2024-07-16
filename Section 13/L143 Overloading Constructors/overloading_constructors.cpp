/*
    Overloading Constructors:
        - Classes have no limit on constructors, but each must have a unique signature
        - Default constructor in no longer compiler-generated once another constructor is declared
        - Best practice is to always initialize all class attributes no matter which constructor is called
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
    // Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player() {
    name = "none";
    health = 0;
    xp = 0;
}

Player::Player(std::string name_val) {
    name = name_val;
    health = 0;
    xp = 0;
}

Player::Player(std::string name_val, int health_val, int xp_val) {
    name = name_val;
    health = health_val;
    xp = xp_val;
}

int main() {
    Player empty; // None, 0, 0

    Player hero {"Hero"}; // "Hero", 0, 0
    Player villian {"Villian"}; // "Villian", 0, 0

    Player frank {"Frank", 100, 4}; // Frank, 100, 4

    Player *enemy = new Player("Enemy", 1000, 0); // "Enemy", 1000, 0
    delete enemy;

    return 0;
}
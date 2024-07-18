/*
    Default Constructor Paramters:
        - Can often simplify and reduce overloaded constructors using default parameters
        - Watch out for amibiguous constructors
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
    Player(std::string name_val = "None", int health_val = 100, int xp_val = 0);
    void print_attributes();
};

Player::Player(std::string name_val, int health_val, int xp_val): name {name_val}, health {health_val}, xp {xp_val} {
    cout << "Three-args constructor" << endl;
}

void Player::print_attributes() {
    cout << "Name: " << name << ", Health: " << health << ", XP: " << xp << endl;
}

int main() {

    Player empty;
    Player frank {"Frank"};
    Player hero {"Hero", 200};
    Player villian {"Villian", 100, 55};

    empty.print_attributes();
    frank.print_attributes();
    hero.print_attributes();
    villian.print_attributes();

    return 0;
} 
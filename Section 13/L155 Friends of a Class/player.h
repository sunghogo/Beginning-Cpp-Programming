#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
#include "other_class.h"

class Other_Class;

class Player {
private:
    friend void display_player(Player &p); // non-member function
    friend void Other_Class::display_player(Player &p); // member function of another class
    friend class Other_Class; // Adding another class as friend

    std::string name;
    int health;
    int xp;
public:
    Player(std::string name_val = "None", int health_val = 100, int xp_val = 0)
        : name {name_val}, health {health_val}, xp {xp_val} {
    }
    // ...
};
#endif
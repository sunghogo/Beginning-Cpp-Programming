#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player {
private:
    static int num_players; // Can't class initialize non-const static members
    std::string name;
    int health;
    int xp;
    
    static void increment_num_players();
    static void decrement_num_players();
public:
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }

    Player(std::string name_val = "None", int health_val = 100, int xp_val = 0);
    Player(const Player &source);
    ~Player();

    static int get_num_players();
};

#endif
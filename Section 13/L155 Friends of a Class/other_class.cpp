#include "player.h"
#include "other_class.h"

void Other_Class::display_player(Player &p) { 
        std::cout << p.name << std::endl;
        std::cout << p.health << std::endl;
        std::cout << p.xp << std::endl; 
}
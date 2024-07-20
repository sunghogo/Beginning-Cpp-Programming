/*
    Static Class Members:
        - Class data members can be declared as static
            - A single data member that belongs to the class, not the objects
            - Useful to store class-wide information
        - Class methods can be declared as static:
            - Independent of any objects
            - Can be called using the class name
        - Non-const static members cannot be initialized within the class declaration
*/

#include <iostream>
#include "Player.h"

using namespace std; 

void displayer_active_players() {
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main() {
    displayer_active_players(); // 0

    Player hero {"Hero"};
    displayer_active_players(); // 1
    // Player::increment_num_players(); // Private static member so inaccessible

    {
        Player frank {"Frank"};
        displayer_active_players(); // 2
    }
    displayer_active_players(); // 1

    Player *enemy = new Player("Enemy", 100, 100);
    displayer_active_players(); // 2
    delete enemy;
    displayer_active_players(); // 1

    return 0;
}
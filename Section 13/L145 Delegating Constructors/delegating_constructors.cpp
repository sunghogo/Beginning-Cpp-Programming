/*
    Delegating Constructors:
        - Code for one constructor can call another ONLY in the initialization list
        - Avoids duplicating code

        Class_Name::Class_Name( parameter_1, etc.. ) : Player { argument_1, etc.. } { constructor body... } 
*/

/*
    Constructor Initilization Lists:
        - Are more efficient as initilization list immediately follows the parameter list       
            - Initializes the data members as the object is created, before body of constructors are executed
        - Order of initialization is the order of Declaration in the class

        Class_Name::Class_Name() : attribute_1 {init_val_1}, attribute_2 {init_val_2}, etc.. { constructor body.. }

        OR

        Class_Name::Class_Name(type parameter_1, etc...) : attribute_1 {paramter_1}, etc.. { constructor body... }
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
    void print_attributes();
};

Player::Player(std::string name_val, int health_val, int xp_val): name {name_val}, health {health_val}, xp {xp_val} {
    cout << "Three-args constructor" << endl;
}

Player::Player(): Player{"None", 0, 0} {
    cout << "No-args constructor" << endl;

}

Player::Player(std::string name_val): Player {name_val, 0, 0} {
    cout << "One-args constructor" << endl;
}

void Player::print_attributes() {
    cout << "Name: " << name << ", Health: " << health << ", XP: " << xp << endl;
}

int main() {

    Player empty;
    Player frank {"Frank"};
    Player villian {"Villian", 100, 55};

    empty.print_attributes();
    frank.print_attributes();
    villian.print_attributes();

    return 0;
} 
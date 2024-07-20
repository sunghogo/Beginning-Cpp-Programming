/*
    Using const with classes:
        - Pass arguments to class member methods as const
        - Create const objects
        - const-correctness:
            - What happens when we call member functions on const objects?
    
    Creating a const Object:
        - const objects cannot change its attributes
        - const objects cannot call its member methods since it may modify its attributes
        - To override this behavior, with specify const in member method declarations (to tell the compiler it does not affect the object)
            - Allows method to be called
            - Creates compiler errors if method changes attributes

        class Class_Name {
        private:
            ...
        public:
            std::string method_1() const;
            ...
        }; 
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
    std::string get_name() const {
        return name;
    }
    void set_name(std::string name_val) {
        name = name_val;
    }

    // Overloaded Constructors
    Player(std::string name_val = "None", int health_val = 100, int xp_val = 0);
};

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name {name_val}, health {health_val}, xp {xp_val} {}

void display_player_name(const Player &p) {
    cout << p.get_name() << endl;
}

int main() {

    const Player villian {"Villian", 100, 55};
    
    Player hero {"Hero", 100, 15};

    // villian.set_name("Super villian"); // Compiler error due to const obj
    // cout << villian.get_name() << endl; // Compiler error due to const obj
    cout << hero.get_name() << endl;

    // display_player_name(villian); // Compiler error due to const obj
    // display_player_name(hero); // Compiler error since const parameter

    // After specifying get_name() as const method 
    display_player_name(villian);
    display_player_name(hero);

    return 0;
}
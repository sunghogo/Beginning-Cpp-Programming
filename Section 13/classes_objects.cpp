/*
    Classes and Objects:
        - Classes: Blueprint from which objects are created. Contains:
            - User-defined data-type
            - Attributes (data)
            - Methods (functions)
            - Hide data and methods
            - Provide a public interface
        - Objects: Represents a specific instance of a class.
            - Can create numerous objects
            - Each has its own identity
            - Each can use the defined class methods
    
    Declaring a Class:
        class Class_Name {
            //  declaration(s);
        };
        - Can initialize attributes in declaration since C++11
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    // attributes, garbage data for primitive attributes
    string name {"Player"};
    int health {100};
    int xp {3};

    // methods
    void talk(string);
    bool is_dead();
};

class Account {
    // attributes
    string name {"Account"};
    double balance {0.0};

    // methods
    bool deposit(double);
    bool withdraw(double);
};

int main() {
    // Stack
    Player frank;
    Player hero;

    Player player[] {frank, hero};

    vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    Account frank_account;
    Account jim_account;
    
    // Heap
    Player *enemy {nullptr};
    enemy = new Player();

    delete enemy;

    return 0;
}

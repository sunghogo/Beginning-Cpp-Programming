/*
    The Default Constructor:
        - Constructor that does not expect any arguments (akak "no-args constructor")
            - Called when you declare/instantiate a new object
        - If a class has no constructors, C++ will generate a default constructor that does nothing
            - Otherwise have to write your own to default initialize objects
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
    std::string get_name() {
        return name;
    }
    Player() {
        name = "None";
        health = 100;
        xp = 3;
    }
    Player(std::string name_val, int health_val, int xp_val) {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
};

int main() {
    // Player frank; // C++ generated default consructor, which cannot be called once we define a constructor
    Player hero; // Default constructor
    Player frank {"Frank", 100, 13}; // Constructor with 3 args
    frank.set_name("Frank");
    cout << frank.get_name() << endl;

    return 0;
}
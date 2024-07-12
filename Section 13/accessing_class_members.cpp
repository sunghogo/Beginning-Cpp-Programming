/*
    Accessing Class Members:
        - We can access class attributes and class methods
        - Some class members will not be accessible (by default all class information is private)
        - We need an object to access instance variables
        - Use the . dot operator:
            object.instance_variable;
            object.instance_method();
        - For pointers, dereference the object first:
            (*object_pointer).instance_variable;
            OR use pointer arrow operator
            object_pointer->instance_variable;
*/

#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    // attributes
    string name ;
     int health;
    int xp;

    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl;};
    bool is_dead();
};

class Account {
public:
    // attributes
    string name;
    double balance;

    // methods
    bool deposit(double amount) {balance += amount; cout << "In deposit" << endl; return true;};
    bool withdraw(double amount) {balance -= amount; cout << "In withdraw" << endl; return true;};
};

int main() {
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will destroy you");

    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    return 0;
}
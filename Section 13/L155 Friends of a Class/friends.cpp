/*
    Friends of a Class:
        - Controversial because friends violate encapsulation
        - Friend:
            - A function or class that has access to a private class member of a class that it is NOT a a member of
        - Friend Functions:
            - Can be standalone non-members functions
            - Can be member methods of another class
        - Friend Class:
            - Another class can have access to private class members

        - Friendship must be explicitly granted NOT taken
            - Declared explicity in the class granting friendship
            - Declared in the function prototype with keyword friend
        - Friendship is not symmetric
        - Friendship is no transitive
        - Friendship is not inherited
*/

#include <iostream>
#include <string>
#include "player.h"
#include "other_class.h"

using namespace std;

void display_player(Player &p) { // can get and set Player private members
    cout << p.name << endl;
    cout << p.health << endl;
    cout << p.xp << endl;
}

int main() {
    Player p {"Frank", 100, 0};
    Other_Class c;

    display_player(p);
    c.display_player(p);

    return 0;
}
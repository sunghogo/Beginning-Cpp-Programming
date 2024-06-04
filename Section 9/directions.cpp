#include <iostream>
using namespace std;

int main() {
    enum Direction {
        left, right, up, down
    };

    Direction heading {left};

    // Compiler will give warning to handle all the types
    switch (heading){
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        // case down:
        //     cout << "Going down" << endl;
        //     break;
        // case up:
        //     cout << "Going up" << endl;
        //     break;
        default:
            cout << "OK" << endl;

        cout << endl;
        return 0;
    }
}
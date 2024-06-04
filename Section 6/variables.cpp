#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

// int age {18}; // global variable

int main() {
    // Uninitialized variables will have unknown values stored in them

    // Best practice to declare variables closest to where they are first used

    // Local vs global variables
    // int age {18}; // local variable usable only within main()

    cout << "Enter the width of the room: ";
    int roomWidth {0};
    cin >> roomWidth;
    
    cout << "Enter the width of the room: ";
    int roomLength {0};
    cin >> roomLength;

    cout << "The area of the room is: " << roomWidth * roomLength << " square feet" << endl;

    return 0;
}
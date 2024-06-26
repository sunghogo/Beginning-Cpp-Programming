/*
    do {
        statements;
    } while (expression);

    useful for when you need the first iteration of the while loop to execution
*/

#include <iostream>
using namespace std;

int main() {
    char selection {};
    do {
        cout << "\n=========================" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        switch (selection){
            case '1':
                cout << "You chose 1 - doing this" << endl;
                break;
            case '2':
                cout << "You chose 2 - doing that" << endl;
                break;
            case '3':
                cout << "You chose 1 - doing something else" << endl;
                break;
            case 'q':
            case 'Q':
                cout << "Goodbye..." << endl;
                break;
            default:
                cout << "Unknown option -- try again..." << endl;
        }
    } while (selection != 'q' && selection != 'Q');


    cout << endl;
    return 0;
}
#include <iostream>

using namespace std;

/*
    Arrays:
        - Fixed size
        - Elements are all the same type
        - Stored contiguously in memory
        - Individual elements can by accessed by their position/index (index: [0] to [size-1])
        - No checking to see if you are out of bounds
*/

int main() {
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    // Out of bounds, program may crash or not
    // cin >> vowels[5];

    double highTemps [] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << highTemps[0] << endl;
    highTemps[0] = 100.7;
    cout << "The first high temperature is now: " << highTemps[0] << endl;
    
    // Initializes all values to 0 (initializes first element to 0, and the rest to 0)
    // int testScores[5] {0};

    int testScores[5] {100, 90, 80, 70, 60};
    cout << "\nFirst score at index 0: " << testScores[0] << endl;
    cout << "Second score at index 1: " << testScores[1] << endl;
    cout << "Third score at index 2: " << testScores[2] << endl;
    cout << "Fourth score at index 3: " << testScores[3] << endl;
    cout << "Fifth score at index 4: " << testScores[4] << endl;

    cout << "\nEnter 5 test scores: ";
    cin >> testScores[0];
    cin >> testScores[1];
    cin >> testScores[2];
    cin >> testScores[3];
    cin >> testScores[4];

    cout << "\nThe updated array is:";
    cout << "First score at index 0: " << testScores[0] << endl;
    cout << "Second score at index 1: " << testScores[1] << endl;
    cout << "Third score at index 2: " << testScores[2] << endl;
    cout << "Fourth score at index 3: " << testScores[3] << endl;
    cout << "Fifth score at index 4: " << testScores[4] << endl;

    cout << "\nNotice what the value of the array name is: " << testScores << endl; //outputs the memory address of the array
    

    return 0;
}
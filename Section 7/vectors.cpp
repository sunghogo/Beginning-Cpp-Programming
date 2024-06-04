#include <iostream>
#include <vector> // don't forget this to use vectors

using namespace std;

/*
    Vectors:
        - Container in the C++ Standard Template Library (need using namespace std)
        - An array that can grow and shrink in size at execution time
        - Elements initialized to 0
        - Similar semantics/syntax to arrays, but also very efficient
        - Can provide bounds checking (but accessing using subscript operator '[]' provides no bounds checking)
        - Has in-built methods like sort, reverse, find, etc.

    Vector Methods:
        .at(index) // does bounds checking
        .push_back(appended_element) // automatically allocates required space ... also for primitive types (vectors), we are creating copies, not references
        .size() // gives size of vector
*/

int main() {
    // vector <char> vowels; // empty
    // vector <char> vowels (5); // size 5 initialized to 0
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    // cout << vowels[5] << endl; // no bounds checking
    // cout << vowels.at(5) << endl; // bounds checking


    // vector <int> testScores (3); // 3 elements all initialized to 0
    // vector <int> testScores (3, 100); // 3 elements all initialzed to 100
    vector <int> testScores {100, 98, 89};

    cout << "\nTest scores using array syntax:" <<endl;
    cout << testScores[0] << endl;
    cout << testScores[1] << endl;
    cout << testScores[2] << endl;

    cout << "\nTest scores using vector syntax:" <<endl;
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << "\nThere are " << testScores.size() << " scores in the vector" << endl;

    cout << "\nEnter 3 test scores: ";
    cin >> testScores.at(0);
    cin >> testScores.at(1);
    cin >> testScores.at(2);

    cout << "\nUpdated test scores: " << endl;
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;

    cout << "\nEnter a test score to add to the vector" << endl;
    int scoreToAdd {0};
    cin >> scoreToAdd;
    testScores.push_back(scoreToAdd);

    cout << "\nEnter one more test score to add to the vector" << endl;
    cin >> scoreToAdd;
    testScores.push_back(scoreToAdd);

    cout << "\nTest scores are now: " << endl;
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << testScores.at(3) << endl;
    cout << testScores.at(4) << endl;
    cout << "\nThere are now " << testScores.size() << " scores in the vector" << endl;

    // cout << "This should cause an exception!!!" << testScores.at(10) << endl;

    // Example of 2D vector
    vector <vector <int>> movieRatings 
    {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 3, 4, 5}
    };

    cout << "\nHere are the movie ratings for review #1 using array syntax: " << endl;
    cout << movieRatings[0][0] << endl;
    cout << movieRatings[0][1] << endl;
    cout << movieRatings[0][2] << endl;
    cout << movieRatings[0][3] << endl;

    cout << "\nHere are the movie ratings for review #1 using vector syntax: " << endl;
    cout << movieRatings.at(0).at(0) << endl;
    cout << movieRatings.at(0).at(1) << endl;
    cout << movieRatings.at(0).at(2) << endl;
    cout << movieRatings.at(0).at(3) << endl;

    cout << endl;
    return 0;
}

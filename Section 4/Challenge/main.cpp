#include <iostream>

int main() {
    int favoriteNumber;

    std::cout << "Enter your favorite number between 1 and 100: ";

    std::cin >> favoriteNumber;

    //std::format() is not recognized even with -std=c++20
    std::cout << "Amazing!! That's my favorite number too!" << std::endl << "No really!!, " << favoriteNumber << " is my favorite number!" << std::endl;

    return 0;
}
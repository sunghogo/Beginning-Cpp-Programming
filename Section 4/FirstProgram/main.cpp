// iostream includes cout and cin
#include <iostream>

int main() {
    std::cout << "Enter your favorite number between 1 and 100: ";
    
    int favoriteNumber;
    std::cin >> favoriteNumber;

    // endl to flush buffer and print to next line  
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;

    // Return 0 for successful exit
    return 0;
}
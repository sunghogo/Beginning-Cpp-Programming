#include <iostream>

using namespace std;

/*
    C++ Primitive Types:
        Character, Integer, Floating-Point, Boolean
    
    Size and precision usually compiler-dependent:
        #include <climits>

    Type Sizes:
        8, 16, 32, 64 bytes : 2^8, 2^16< 2^32, 2^64 values
    
    Character Types:
        char (1B), char16_t (at least 2B), char32_t (at least 4B), wchar_t 

    Integer Types:
        Signed:
            short (at least 2B), int (at least 2B), long (at least 4B), long long (at least 8B)
        Unsigned:
            unsigned short (at least 2B), unsigned (at least 2B), unsigned long (at least 4B), unsigned long long (at least 8B)

    Floating-Point Types:
        float (4B, 7 decimal digits precision), double (8B, 15 decilam digits precision), long double (16B, 19 decimal digits precision)

    Boolean Types:
        bool (1B)L 0/1 or other positive int, false/true
    
*/
int main() {
    /* Character types */
    char middleInitial {'D'};
    cout << "My middle initial is: " << middleInitial << endl;
    
    /* Integer types */
    unsigned short int examScore {55};
    cout << "My exam score is: " << examScore << endl;

    int countriesRepresented {65};
    cout << "There were " << countriesRepresented << "countries represented in my meeting" <<endl;

    long peopleInFlorida {20'610'000};
    cout << "There are about " << peopleInFlorida << " people in Florida" << endl;

    // C++14 alows ' as digit separators
    // Use {} to initialize as it is more strict with value initialization, and will not implicitly attempt to convert values
    long long peopleOnEarth {7'600'000'000};
    cout << "There are about " << peopleOnEarth << " people on Earth" << endl;

    long long distanceToAlphaCentauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distanceToAlphaCentauri << " kilometers" << endl;

    /* Floating Point Types */
    float carPayment {401.23};
    cout << "My car payment is " << carPayment << endl;

    double pi {3.14159};
    cout << "Pi is " << pi << endl;

    long double largeAmount {2.7e120};
    cout << largeAmount << " is a very large number" << endl;

    /* Boolean Type */
    bool gameOver {false};
    cout << "The value of gameOver is " << gameOver << endl;

    /* Overflow example */
    short value1 {30000};
    short value2 {1000};
    // This results in -15488
    short product {value1 * value2};
    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
}
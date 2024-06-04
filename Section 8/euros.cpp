// Convert EUR to USD

#include <iostream>

using namespace std;

int main() {
    const double usdPerEur {1.19};

    cout << "Welcome to the EUR to USD Converter" << endl;
    cout << "Enter the value in EUR: ";

    double euros {0.0};
    double dollars {0.0};

    cin >> euros;
    dollars = euros * usdPerEur;

    cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;

    cout << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main () {
    int num {};
    const int min {10};
    const int max {100};

    cout << "Enter a number between: " << min << " and " << max << ": ";
    cin >> num;

    if (num >= min) {
        cout << num << " is greater than or equal to " << min << endl;

        int diff {num-min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max) {
        cout << num << " is less than or equal to " << max << endl;

        int diff {max-num};
        cout << num << " is " << diff << " less than " << max << endl;
    }

    if (num >= min && num <= max) {
        cout << num << " is in range " << endl;
    }

    if (num == min || num == max){
        cout << num << " is right on the boundary " << endl;
    }


    cout << endl;
    return 0;
}
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

void printIntro() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n" << endl;
}

int promptSnallRooms() {
    int numSmallRooms {0};

    cout << "How many small rooms would you like cleaned? ";
    cin >> numSmallRooms;

    return numSmallRooms;
}

int promptLargeRooms() {
    int numLargeRooms {0};

    cout << "How many large rooms would you like cleaned? ";
    cin >> numLargeRooms;
    cout << endl;

    return numLargeRooms;
}

void printSummary(int numSmallRooms, int numLargeRooms, float pricePerSmallRoom, float pricePerLargeRoom, float cost, float tax, float total, int expiryDays) {
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << numSmallRooms << endl;
    cout << "Number of large rooms: " << numLargeRooms << endl;
    cout << "Price per small room: " << pricePerSmallRoom << endl;
    cout << "Price per large room: " << pricePerLargeRoom << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "===============================" << endl;
    cout << "Total estimate: $" << total << endl; 
    cout << "This estimate is valid for " << expiryDays << " days" << endl;
}

int main() {
    const float pricePerSmallRoom {25.00F};
    const float pricePerLargeRoom {35.00F};
    const float salesTax {0.06F};
    const int expiryDays {30};

    printIntro();
    
    int numSmallRooms {promptSnallRooms()};
    int numLargeRooms {promptLargeRooms()};

    float cost {numSmallRooms * pricePerSmallRoom + numLargeRooms * pricePerLargeRoom};
    float tax {cost * salesTax};
    float total {cost + tax};
    
    printSummary(numSmallRooms, numLargeRooms, pricePerSmallRoom, pricePerLargeRoom, cost, tax, total, expiryDays);
}
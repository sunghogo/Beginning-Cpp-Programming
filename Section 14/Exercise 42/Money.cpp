#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----
Money operator+(const Money &lhs, const Money &rhs) {
    return Money {lhs.dollars + rhs.dollars + (lhs.cents + rhs.cents) / 100, (lhs.cents + rhs.cents) % 100};
}



//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----



/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {
    cout << "\nEnter an amount in cents: ";

    int amount {0};
    cin >> amount;

    int dollars {0}, quarters {0}, dimes {0}, nickels {0}, pennies {0};

    dollars += amount / 100;
    amount %= 100;
    quarters += amount / 25;
    amount %= 25;
    dimes += amount / 10;
    amount %= 10;
    nickels += amount / 5;
    amount %= 5;
    pennies += amount / 1;
    amount %= 1;

    cout << "\nYou can provide this change as follows:";
    cout << "\ndollars:\t\t" << dollars;
    cout << "\nquarters:\t\t" << quarters;
    cout << "\ndimes:\t\t\t" << dimes;
    cout << "\nnickels:\t\t" << nickels;
    cout << "\npennies:\t\t" << pennies;

    cout << endl;
    return 0;
}


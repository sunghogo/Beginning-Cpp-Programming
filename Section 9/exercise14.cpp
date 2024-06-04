/*
For loop - Sum of Odd Integers
Write code that uses a for loop to calculate the sum of the odd integers from 1 to 15, inclusive. The final result should be stored in an integer variable named sum .



You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
*/
#include <iostream>
using namespace std;

int calculate_sum() {
    //---- WRITE YOUR CODE BELOW THIS LINE
    int sum{};

    for (int i{1}; i < 16; i++)
        (i % 2 == 1) ? sum += i : sum ;
    
   
    //---- WRITE YOUR CODE ABOVE THIS LINE
    //---- DO NOT MODIFY THE CODE BELOW
    return sum;
}
int main() {
    cout << calculate_sum() << endl;
    return 0;
}
/*
    l-values:
        - Values that have names and are addressable/assignable
        - Modifiable if they are not constants

    R-Values:
        - Values that are not L-values:
            - Non-addressable and non-assignable
            - Can be:
                - right-hand side expressions
                - literal
                - temporary value which is intended to be non-modifiable
        - Can be assigned to l-values explicitly
    
    L-value References:
        - Referencing is done on L-values:
            int &ref = variable;
            return_type function_name(type &param1) {...}
*/

#include <iostream>
#include <string>

using namespace std;

int square (int &n) {
    return n * n;
}

int main() {
    int x {100}; // x is a L-value, 100 is a R-value
    x = 1000; // 1000 is a R-value
    x = 1000 + 20; // (1000 + 20) is a temporary value, so R-value

    string name; // name is a L-value
    name = "Frank"; // "Frank" is a R-value

    int max_num = max(20, 30); // max(20, 30) is a temporary value, so R-value

    int &ref1 = x; // ref1 is refeence to L-value
    ref1 = 100; // ref1 = x = 100
    // int &ref2 = 100 // Error since 100 is an R-value

    int num {10};
    square(num); // OK
    // square(5); // Error - can't reference R-value 5

    return 0;
}
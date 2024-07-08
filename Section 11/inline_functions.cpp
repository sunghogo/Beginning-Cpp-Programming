/*
    Inline Functions:
        - Inline assembly code that avoids the function call/stack overhead (good for simple functions)
            - Usually defined in header/.h files
        - Faster but can cause code bloat
        - Compilers optimizations will likely inline without your suggestion
        - use inline keyword preceding function declarations/definitions:
            inline returntype function(params...) {
                code block...
            }
*/

#include <iostream>

using namespace std;

inline int add_numbers(int a, int b) {
    return a + b;
}

int main() {
    int result {0};
    result = add_numbers(100, 200);
    cout << result << endl;
    return 0;
}
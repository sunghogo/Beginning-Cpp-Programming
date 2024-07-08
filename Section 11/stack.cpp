/*
    Memory Layout/Order (High to Low Memory Address):
        Stack (Typically grows downward)
        Heap (Typically grows upward)
        Global/Static Variables
        Constant Storage
        Code/Text Segment

    Function Call Stack:
        - LIFO : Last In First Out
            - push items to top, pop items from top
        - Each time a function is called, we push (allocate memory) a activation record/stack frame onto the stack
        - Stack is FINITE (Stack Overflow)
*/

#include <iostream>

using namespace std;

int func2(int &x, int y, int z) {
    return x += y + z; // 30 + (10 + 20)
}

int func1(int a, int b) {
    int result {};
    result = a + b; // 10 + 20
    func2(result, a, b);
    return result; // 60
}

int main() {
    int x {10};
    int y {20};
    int z {};

    z = func1(x, y);
    cout << z << endl; // 60

    return 0;
}

/*
    What typically happens when main calls func1 ( or an function calls another) ? There are other ways to achieve the same result.

    main:
        push stack space for the return value (of func1)
        push stack space for the parameters (of func1)
        push the return address 
        transfer control to func1 (Assembly jmp)
    func1:
        push the address of the previous activation record
        push any register values that will need to be restored before returning to the caller

        perform the code in func1

        restore the register values
        restore the previous activation record (move the stack pointer)

        store any function result (in the pushed stack space)
        transfer control to the return addres (Assembly jmp)
    main:
        pop the parameters
        pop the return value
*/
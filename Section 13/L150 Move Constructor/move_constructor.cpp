/*
    Move Constructor (C++ 11):
        - Similar to unnamed temporary R-values, temporary objects can be created when using constructors
            - Copy constructors can be called many times automatically due to copy semantics of C++
            = Copy constructors doing deep copy have significant performance bottleneck
        - The Move constructor moves an object's raw pointers rather than copy nad delete new ones
            - Optional but recommended with raw pointers as it is very efficients
            - Instead of making a deep copy of the constructor, simply copies the address of the resource from source to the current object, and null outs the pointer in the source pointer
                - aka "steals" the data
        - Copy elision: Compiler optimization technique that optimizes away copying by using Return Value Optimzation (RVO) that doesn't create a copy of a return value from a function

    R-value Referenes:
        - Used by move constructor and move assignment operator to efficiently move an object rather than copy it
        - R-value reference operator '&&' vs 'L-value reference operator '&'
            - This means we can have an overloaded Copy AND Move constructor
        
        Class_Name::Class_Name(Class_Name &&source);
*/

#include <iostream>
#include <vector>

using namespace std;

class Move{
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    
    // Constructor
    Move(int d);
    // Copy Constructor
    Move(const Move &source);
    // Move Constructor
    Move(Move &&source) noexcept; // noexcept means function will not throw an except
    // Destructor
    ~Move();
};

// Constructor
Move::Move(int d) 
    : data {new int} {
        *data = d;
        cout << "Constructor for: " << d << endl;
}

// Copy Constructor
Move::Move(const Move &source) 
    // : data {new int} 
    : Move {*source.data}
{
        // *data = *source.data;
        cout << "Copy constructor - deep copy" << endl;
}

// Move Constructor
Move::Move(Move &&source) noexcept // noexcept means function will not throw an except
    : data {source.data} {
        source.data = nullptr;
        cout << "Move constructor - moving resource: " << *data << endl;
}

// Move Constructor
Move::~Move() {
    if (data != nullptr) {
        cout << "Destructor freeing data for: " << *data << endl;
    } else {
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}

int main() {
    vector<Move> vec;

    // Object not assigned to variable so temporary object. Then when .push_back method is called, a deep copy of this temporary object is created, returned, and deleted.
    vec.push_back(Move{10}); 

    // When a vector dynamically grows, it has to make a copy of its data as well
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});

    return 0;
}
/*
    User-provided Deep Copy Constructor:
        - Create a COPY of the pointed-to data
            - Each copy with have a pointer to unique storage in the heap
        - Deep copy when you have a raw pointer as a class data member
*/

#include <iostream>

using namespace std;

class Deep{
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    
    // Constructor
    Deep(int d);
    // Copy Constructor
    Deep(const Deep &source);
    // Destructor
    ~Deep();
};

Deep::Deep(int d) 
    : data {new int} {
        *data = d;
}

Deep::Deep(const Deep &source) 
    // : data {new int} 
    : Deep {*source.data}
{
        // *data = *source.data;
        cout << "Copy constructor - deep copy" << endl;
}

Deep::~Deep() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_deep(Deep d) {
    cout << d.get_data_value() << endl;
}

int main() {

    Deep obj1 {100};
    display_deep(obj1); // Frees up only copy data pointer

    Deep obj2 {obj1}; // 100
    obj2.set_data_value(1000); // Sets only obj2 data pointer

    display_deep(obj1); // 100
    display_deep(obj2); // 1000

    return 0; // Properly frees up both obj1 and obj2 data pointers
}
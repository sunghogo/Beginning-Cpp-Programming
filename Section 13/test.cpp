#include <iostream>
#include <vector>

using namespace std;

class Test {
private:
    int num;
    int *data;
public:
    Test(int num_val, int data_val) 
        : num {num_val}, data {new int} 
        { *data = data_val; cout << "Constructing obj " << num << " with data " << data << endl; }
    Test() 
        : Test {0, 0}   
        {}
    Test(const Test &source)
        : Test {source.num, *source.data}
        { cout << "Copying obj with new data " << data << endl; }
    // Test(Test &&source) 
    //     : num {source.num}, data {source.data}
    //     { cout << "Creating obj " << num << " with data " << data << endl; source.data = nullptr; cout << "Moving data " << data << endl; }
    ~Test() 
        { if (data != nullptr) delete data; cout << "Deleting and freeing data " << data << endl; }
    int get_num() { return num; }
};
 
void func(Test obj) {
    cout << "Calling " << obj.get_num() << endl;
}

int main() {
    // Test obj1 {-1, -1};
    // Test obj1_clone {obj1};

    cout << "\nPushing list" << endl;
    vector<Test> list {};
    for (int i {0}; i < 3 ; i++) list.push_back(Test{i, i});

    cout << "\nIterating list" << endl;
    for (auto &test: list) cout << test.get_num() << endl;
    cout << endl;

    cout << "\nEnd list" << endl;
    return 0;
}
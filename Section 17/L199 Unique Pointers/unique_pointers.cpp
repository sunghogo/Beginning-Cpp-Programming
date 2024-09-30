/*
    Unique Pointers:
        - Simple smart pointer - very efficient
            std::unique_ptr<T> = { new T {initialization value} }
            or
            std::unique_ptr<T> = make_unique<T>(initialization value)

        - Points to an object of type T on the heap
        - It is unique
            - There can only be one unique_pointer<T> pointing to the object on the heap
        - Owns what it points to
        - Cannot be assigned or copied
            - So does not have copy constructors or copy assignment operators
        - CAN be moved
        - When the pointer is destroyed, what it points to is automatically destroyed
    
    Unique Pointer Functions/Methods:
        .get() : returns mananged memory address (basically ptr in unique_ptr<T> ptr;)
        .reset() : sets unique pointer to nullptr
        move(ptr) : Moves the pointer (for cases when it can't be copied)
        make_unique<T>(initialization value) : C++14, Used to make a raw pointer unique, and replaces the new T {initialization value} 
*/

#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Savings_Account.h"

class Test {
private:
    int data;
public:
    Test() : data {0} { std::cout << "Test constructor (" << data << ")" << std::endl;}
    Test(int data) : data {data} {std::cout << "Test constructor (" << data << ")" << std::endl;}
    int get_data() const {return data;}
    ~Test() {std::cout << "Test destructor (" << data << ")" << std::endl; }
};


using namespace std;

int main() {
    // Test t1 {1};

    // Test *t2 = new Test{2};
    // delete t2;

    std::unique_ptr<Test> t1 {new Test{100}};
    std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);

    std::unique_ptr<Test> t3;
    // t3 = t1; // Compiler Error: Cannot assign
    t3 = std::move(t1); // t1 move to t3, t1 is now nullptr
    std::cout << "t3: " << t3 << std::endl;
    std::cout << "t1: " << t1 << std::endl;

    std::unique_ptr<Account> a1 {std::make_unique<Checking_Account>("Moe", 5000)};
    std::cout << *a1 << std::endl;
    a1->deposit(5000);
    std::cout << *a1 << std::endl;

    std::vector<std::unique_ptr<Account>> accounts;

    accounts.push_back(std::make_unique<Checking_Account>("James", 1000));
    accounts.push_back(std::make_unique<Savings_Account>("Billy", 4000, 5.2));
    accounts.push_back(std::make_unique<Trust_Account>("Bobby", 5000, 4.5));

    // for (auto acc: accounts) // Compiler Error: Cannot copy unique ptrs
    //     std::cout << *acc << std::endl;

    for (const auto &acc: accounts)
        std::cout << *acc << std::endl;

    return 0;
}
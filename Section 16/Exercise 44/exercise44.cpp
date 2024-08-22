/*
Inheritance - Roar Lion, Roar!
Coding Challenge: Implementing the Lion Class

Problem Statement

The zoo management system you're working on currently has an abstract base class Animal, defined in the Animal.h header file. This class contains two pure virtual methods:

get_noise(): Returns a string representing the noise that the animal makes.

get_num_legs(): Returns an integer representing the number of legs the animal has.

The Animal class is defined as follows:
 
#ifndef ANIMAL_H
#define ANIMAL_H
 
#include <string>
 
// Abstract base class Animal
 
class Animal {
public:
    virtual std::string get_noise() = 0; // Pure virtual function
    virtual int get_num_legs() = 0; // Pure virtual function
};
 
#endif


Your task is to declare a Lion class that inherits from Animal, in a new file called Lion.h. You need to override the get_noise() and get_num_legs() methods:

get_noise(): Should return the string "Roar".

get_num_legs(): Should return the integer 4.

You should then implement thse methods in the Lion.cpp file.

Input Format

There is no input for this task.

Constraints

The Lion class must inherit from the Animal class and correctly override the pure virtual methods.

How am I testing this Coding Exercise?

I will create a new Lion object and call the get_noise() and get_num_legs() methods and I expect to get back "Roar" and 4, respectively.

Lion lion;
lion.get_noise();   // I expect a "Roar"
lion.get_num_legs(); // I expect back 4
I will also test the code with Animal and Lion pointers and expect the same values.

Lion *lion_ptr = new Lion();
lion_ptr->get_noise();   // I expect a "Roar"
lion_ptr->get_num_legs(); // I expect back 4
and

Animal *animal_ptr = new Lion();
animal_ptr->get_noise();   // I expect a "Roar"
animal_ptr->get_num_legs(); // I expect back 4








I will also create a new Lion obkect
*/

#include <iostream>
#include "Lion.h"

using namespace std;

int main() {
    Animal *ptr = new Lion();

    cout << "Noise: " << ptr->get_noise() << " Legs: " << ptr->get_num_legs() << endl;

    delete ptr;
    return 0;
}
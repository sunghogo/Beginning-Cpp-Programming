/*
    Pure Virutal Functions and Abstract Classes:
        - Abstract (base) class
            - Cannot instantiate objects
                - Too generic to create objects from
                - Can have pointers and referenes to them that dynamically refer to concrete classes/objects derived from them
            - These classes are used as base classes in inheritance heirarchies (aka "Abstract Base Classes")
                - Usually serves as parent to Derived classes that may have objects
                - Contains at least one pure virtual function

        - Concrete class
            - Used to instantiate objects from
            - All their member functions are defined

        - Pure virtual function
            - Specifed with "=0" in its declaration:
                virtual void function() = 0;
            - Use to make a class ABSTRACT
            - Typically do not provide implementations

            - Derived classes MUST override the Base class
            - If the Derived class does not override tthen the Derived class is also abstract
            - Used when it doesn't make sense for a Base class to have an implmentation
                - But conrete classes MUST implement it
*/

#include <iostream>
#include <vector>

class Shape { // Abstract Base Class
private:
    // attributes common to all shapes
public:
    virtual void draw() = 0;    // pure virtual function
    virtual void rotate() = 0;  // pure virtual function
    virtual ~Shape() {};
};

class Open_Shape: public Shape { // Abstract Derived class (since not overriding virtual functions)
public:
    virtual ~Open_Shape() {};
};

class Closed_Shape: public Shape { // Abstract Derived class (since not overriding virtual functions)
public:
    virtual ~Closed_Shape() {};
};

class Line: public Open_Shape { // Concrete Derived class
public:
    virtual void draw() override {
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Line() {}
};

class Circle: public Closed_Shape { // Conrete Derived class
public:
    virtual void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a circle" << std::endl;
    }
    virtual ~Circle() {}
    Circle() {};
    Circle(const Circle &source) {std::cout << "Circle Copy constructor" << std::endl; };
};

class Square: public Closed_Shape { // Conrete Derived class
public:
    virtual void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a square" << std::endl;
    }
    virtual ~Square() {}
};

void screen_refresh(const std::vector<Shape *>&shapes) {
    std::cout << "Refreshing" << std::endl;
    for (const auto p: shapes)
        p->draw();
}

int main() {
    // Shape s; // Compiler Error: Instantiating Abstract class
    // Shape *p = new Shape(); // Compiler Error: Instantiating Abstract class

    Circle c;
    c.draw(); // Drawing a Circle

    Shape *ptr = new Circle();
    ptr->draw(); // Drawing a Circle
    ptr->rotate(); // Rotating a Circle

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape *> shapes {s1, s2, s3};
    for (const auto p: shapes)
        p->draw(); // Draw circle, line, square

    screen_refresh(shapes); // Refreshing, Draw circle, line, square

    delete ptr;
    delete s1;
    delete s2;
    delete s3;

    return 0;
}
/*
    Defining Functions:
        - Enables modularization of code that can be reused
        - An example of Abstraction (describing code according to its functionality) 

        returntype name(parameter list) {
            statement(s);
            return value;
        }
*/

#include <iostream>
#define _USE_MATH_DEFINES // Needs to be before cmath
#include <cmath>

using namespace std;

double calc_area_circle(double radius) {
    return M_PI * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius)  * height;   
}

void area_circle() {
    double radius {};
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "The area of a circle with a radius " << radius << " is " << calc_area_circle(radius) << endl;     
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    cout << "The area of a cylinder with a radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

int main() {
    area_circle();
    volume_cylinder();

    return 0;
}
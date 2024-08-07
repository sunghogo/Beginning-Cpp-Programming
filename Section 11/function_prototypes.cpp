/*
    Function Protyping/Forward Declarations:
        type function_name(type, type);
            or
        type function_name(type param1, type param2);
    
        - The order of the the prototypes does not matter
        - Function prototypes are usually contained in a separate header/.h file, and then imported (like iostream, etc.)
*/

#include <iostream>
#define _USE_MATH_DEFINES // Needs to be before cmath
#include <cmath>

using namespace std;

// Functinon prototypes
double calc_area_circle(double height);
double calc_volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder(); 

int main() {
    area_circle();
    volume_cylinder();

    return 0;
}

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

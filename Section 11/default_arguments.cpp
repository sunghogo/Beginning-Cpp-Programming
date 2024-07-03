/*
    Default Arguments:
        - Default argument value is used when not specified in funciton call
        - Default argument values must be in EITHER the function prototype or definition but NOT both
        - Once you define a default value, the REST of the parameters also NEED to have default values
        
        returntype function(type param1 = defaultvalue);

        returntype function(type param1 = defaultvalue) {
            statement(s):
            return type;
        }
*/

#include <iostream>
#include <iomanip>

using namespace std;

double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);

void print_cost(double cost);

void greeting(string name, string prefix = "Mr.", string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost + (base_cost * tax_rate) + shipping;
}

void print_cost(double cost) {
    cout << "Cost is: " << cost << endl;
}

void greeting (string name, string prefix, string suffix) {
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}

int main() {
    double cost {0};
    cout << fixed << setprecision(2);
    
    cost = calc_cost(100.0, 0.08, 4.25);
    print_cost(cost);

    cost = calc_cost(100.0, 0.08);
    print_cost(cost);

    cost = calc_cost(200.0);
    print_cost(cost);

    cost = calc_cost();
    print_cost(cost);

    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Rogers", "Professor", "Ph.D.");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.", "Ph.D.");

    return 0;
}

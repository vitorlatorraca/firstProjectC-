#include <iostream>
#include "MathOperations.h"
#include "Circle.h"
#include <iomanip>  // para setprecision
using namespace std;

int main() {
    // Demonstrar uso da classe MathOperations
    MathOperations mathOps;

    cout << "Multiplying 2 integers (3 * 4): " 
         << mathOps.multiply(3, 4) << endl;

    cout << "Multiplying 2 doubles (2.5 * 3.5): "
         << mathOps.multiply(2.5, 3.5) << endl;

    cout << "Multiplying 3 integers (2 * 3 * 4): "
         << mathOps.multiply(2, 3, 4) << endl;

    cout << "------------------------------\n";

    // Demonstração da classe Circle. //
    double radius;
    cout << "Enter circle radius: ";
    cin >> radius;

    Circle circle(radius);

    cout << fixed << setprecision(2);
    cout << "Circle Area: " << circle.calculateArea() << endl;
    cout << "Circle Circumference: " << circle.calculateCircumference() << endl;

    return 0;
}

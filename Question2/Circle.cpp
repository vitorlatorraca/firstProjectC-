#include "Circle.h"
#include <cmath>

// Constructor
Circle::Circle(double r) {
    radius = r;
}

// Method to calculate area
double Circle::calculateArea() {
    return M_PI * radius * radius;
}

// Method to calculate circumference
double Circle::calculateCircumference() {
    return 2 * M_PI * radius;
}

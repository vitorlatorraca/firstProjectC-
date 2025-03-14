#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius;
public:
    Circle(double r);
    double calculateArea();
    double calculateCircumference();
};

#endif

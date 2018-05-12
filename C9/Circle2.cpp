#include "Circle2.h"

// Construct a default circle object
Circle::Circle() {
    radius = 1;
}

// Construct a circle object
Circle:: Circle(double newRadius) {
    radius = newRadius;
}

double Circle::getArea() {
    return radius * radius * PI;
}

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double newRadius) {
    radius = (newRadius >= 0) ? newRadius : 0;
}
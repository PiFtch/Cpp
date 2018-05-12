#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    Circle circle1;
    Circle circle2(5.0);

    cout << "The area of the circle of radius " << circle1.radius << " is " << circle1.getArea() << endl;
    cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;

    circle2.radius = 100;
    cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;

    Circle *pCircle1 = new Circle(5.9);
    cout << "The radius is " << pCircle1->radius << endl;
    cout << "The area is " << pCircle1->getArea() << endl;
    return 0;
}
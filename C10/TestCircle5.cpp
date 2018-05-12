#include <iostream>
#include "Circle5.h"
using namespace std;

int main() {
    cout << "number of circle objects created: " << Circle::getNumberOfObjects() << endl;

    Circle circle1;
    cout << "the area of circle1 of radius " << circle1.getRadius() << " is " << circle1.getArea() << endl;
    cout << "number of circle objects created: " << Circle::getNumberOfObjects() << endl;

    circle1.setRadius(3.3);
    cout << "the area of circle1 of radius " << circle1.getRadius() << " is " << circle1.getArea() << endl;
    
}
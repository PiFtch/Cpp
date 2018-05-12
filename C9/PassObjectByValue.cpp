#include <iostream>
#include "Circle2.h"
using namespace std;

void printCircle(Circle c) {
    cout << "The area of the circle of " << c.getRadius() << " is " << c.getArea() << endl;
    c.setRadius(2.0);
    cout << c.getRadius();
}

int main() {
    Circle myCircle(5.0);
    printCircle(myCircle);
    cout << myCircle.getRadius();

    return 0;
}
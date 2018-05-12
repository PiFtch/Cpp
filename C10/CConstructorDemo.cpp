#include <iostream>
#include "Circle6.hpp"
using namespace std;

int main() {
    Circle circle1(5);
    Circle circle2(circle1);

    cout << "after creating circle2 from circle1:" << endl;
    cout << "\tcircle1.getRadius() returns " << circle1.getRadius() << endl;
    cout << "\tcircle2.getRadius() returns " << circle2.getRadius() << endl;

    circle1.setRadius(10.5);
    circle2.setRadius(20.5);

    cout << "after modifying circle2 from circle1:" << endl;
    cout << "\tcircle1.getRadius() returns " << circle1.getRadius() << endl;
    cout << "\tcircle2.getRadius() returns " << circle2.getRadius() << endl;

    return 0;
}
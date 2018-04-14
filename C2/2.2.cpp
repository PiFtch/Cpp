#include <iostream>
using namespace std;
const double PI = 3.14159;

double areaOfCircle(double radius);
double volumnOfCylinder(double area, double length);

double areaOfCircle(double radius) {
    return radius * radius * PI;
}

double volumnOfCylinder(double area, double length) {
    return area * length;
}

int main() {
    double radius = 0, length = 0;
    cout << "radius: ";
    cin >> radius;
    cout <<"length: ";
    cin >> length;
    cout << "The volumn of this cylinder is " << volumnOfCylinder(areaOfCircle(radius), length) << '.' << endl;

    return 0;
}
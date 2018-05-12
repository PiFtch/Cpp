#include <iostream>
#include "Circle6.hpp"

using namespace std;

int main() {
    Circle *pCircle1 = new Circle();
    Circle *pCircle2 = new Circle();
    Circle *pCircle3 = new Circle();

    cout << "number of objects is " << Circle::getNumberOfObjects() << endl;

    delete pCircle1;

    cout << "number of objects is " << Circle::getNumberOfObjects() << endl;

    return 0;
}
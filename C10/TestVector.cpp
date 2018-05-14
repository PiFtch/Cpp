#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> intVector;
    for (double i = 0; i < 20; i++)
        intVector.push_back(i);
    cout << sizeof(vector<double>);
    cout << sizeof(intVector);

    return 0;
}
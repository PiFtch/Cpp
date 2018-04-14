#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << right;
    cout << setw(8) << 222 << setw(8) << 33 << 33 << endl;
    cout << setprecision(4) << 4.555 << 3.2576 << endl;
    cout << showpoint << 2345.6547e7 << 2.3454e12;
    return 0;
}
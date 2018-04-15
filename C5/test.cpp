#include <iostream>
using namespace std;

int main () {
    int count = 1;
    int *pCount = &count;
    cout << "count is " << count << " " << &count << endl;
    cout << "pCount is " << pCount << endl;
    cout << "*pCount is " << *pCount << endl;
    cout << "&pCount is " << &pCount << endl;

    pCount = pCount + 0x00000001;                               // 32位模式，地址+1由于对齐，实际地址+4(B)
    cout << "count is " << count << endl;
    cout << "pCount is " << pCount << endl;                         
    cout << "*pCount is " << *pCount << endl;
    cout << "&pCount is " << &pCount << endl;

    return 0;
}
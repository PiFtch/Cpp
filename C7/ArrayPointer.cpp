#include <iostream>
using namespace std;

int main() {
    unsigned long long list[6] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6; i++)
        cout << "address: " << list + i << " value: " << *(list + i) << " value: " << list[i] << endl;
    
}
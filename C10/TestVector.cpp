#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> intVector;
    for (int i = 0; i < 20; i++)
        intVector.push_back(i + 1);
    
    cout << "Numbers in the vector: ";
    for (int i = 0; i < 20; i++) 
        cout << intVector[i] << " ";

    vector<string> stringVector;

    stringVector.push_back("Dallas");
    stringVector.push_back("Archangel");

    cout << "\nStrings in the string vector: ";
    for (int i = 0; i < stringVector.size(); i++)
        cout << stringVector[i] << " ";


    return 0;
}
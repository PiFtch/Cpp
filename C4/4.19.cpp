#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    // Prompt the user to enter the number of lines
    cout << "What is the number of lines? ";
    int numberOfLines;
    cin >> numberOfLines;

    // Print pattern
    // Print each row
    for (int row = 0; row < numberOfLines; row++) {
        // Print each column
        // Print leading spaces
        for (int column = 0; column < numberOfLines - row; column++)
            cout << "     ";
        // Print increasing sequence
        for (double exponent = 0; exponent <= row; exponent++) {
            double numberOfColumn = pow(2.0, exponent);
            if (numberOfColumn < 10)
                cout << "    " << setw(1);
            else if (numberOfColumn < 100)
                cout << "   " << setw(2);
            else if (numberOfColumn < 1000)
                cout << "  " << setw(3);
            cout << numberOfColumn;
        }
        // Print ending numbers
        for (double exponent = row - 1; exponent >= 0; exponent--) {
            double numberOfColumn = pow(2.0, exponent);
            if (numberOfColumn < 10)
                cout << "    " << setw(1);
            else if (numberOfColumn < 100)
                cout << "   " << setw(2);
            else if (numberOfColumn < 1000)
                cout << "  " << setw(3);
            cout << numberOfColumn;
        }
        cout << endl;
    }
    return 0;
}
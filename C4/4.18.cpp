// Print pattern
#include <iostream>
using namespace std;

int main() {
    // Prompt the user to enter the number of lines
    cout << "Enter the number of lines: ";
    int numberOfLines;
    cin >> numberOfLines;

    // Print Pattern I
    cout << "    Pattern I" << endl;
    for (int row = 1; row <= numberOfLines; row++) {
        // Print a line
        for (int column = 1; column <= row; column++)
            cout << ((column >= 10) ? " " : "  ") << column;
        cout << endl;
    }

    // Print Pattern II
    cout << endl << "    Pattern II" << endl;
    for (int row = numberOfLines; row >= 1; row--) {
        // Print a line
        for (int column = 1; column <= row; column++)
            cout << ((column >= 10) ? " " : "  ") << column;
        cout << endl;
    }

    // Print Pattern III
    cout << endl << "    Pattern III" << endl;
    for (int row = 1; row <= numberOfLines; row ++) {
        // Print each line
        for (int column = numberOfLines; column >= 1; column--) {
            // Print leading spaces
            cout << ((column > row) ? "   " : ((column >= 10) ? " " : "  "));
            // Print numbers
            if (column <= row)
                cout << column;
        }
        cout << endl;
    }

    // Print Pattern IV
    cout << endl << "    Pattern IV" << endl;
    for (int row = numberOfLines; row >= 1; row--) {
        // Print each line
        int numberOfColumn = 1;
        for (int column = 1; column <= numberOfLines; column++) {
            if (column <= (numberOfLines - row))
                cout << "   ";
            else {
                cout << ((numberOfColumn >= 10) ? " " : "  ") << numberOfColumn++;
            }
        }
        cout << endl;
    }

    return 0;
}
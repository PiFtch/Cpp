#include <iostream>
using namespace std;

int main() {
    // Prompt the user to enter the number of lines
    cout << "Enter the number of lines: ";
    int numberOfLines;
    cin >> numberOfLines;

    if (numberOfLines < 1 || numberOfLines > 15) {
        cout << "You must enter a number from 1 to 15";
        return 0;
    }

    // Print lines
    for (int row = 1; row <= numberOfLines; row++) {
        // Print (numberOfLines - row) leading spaces
        for (int column = 1; column <= numberOfLines - row; column++)
            cout << "   ";

        // Print leading numbers
        for (int num = row; num >= 1; num--)
            cout << ((num >= 10) ? " " : "  ") << num;

        // Print ending numbers
        for (int num = 2; num <= row; num++)
        cout << ((num >= 10) ? " " : "  ") << num;

        // Start a new line
        cout << endl;
    }

    return 0;
}
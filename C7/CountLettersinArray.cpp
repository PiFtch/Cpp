#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int NUMBER_OF_LETTERS = 100;
char * createArray();
void displayArray(char []);
int * countLetters(char []);
void displayCounts(int []);

int main() {
    // Create an array
    char *chars = createArray();

    // Display the array
    cout << "The lowercase letters are: " << endl;
    displayArray(chars);

    // Count the occurrences of each letter
    int *counts = countLetters(chars);

    // Display counts
    cout << endl;
    cout << "The occurrences of each letter are: " << endl;
    displayCounts(counts);

    return 0;
}

char * createArray() {
    // Declare an array of characters and create it
    char *chars = new char[NUMBER_OF_LETTERS];

    // Create lowercase letters randomly and assign them to the array
    srand(time(0));
    for (int i = 0; i < NUMBER_OF_LETTERS; i++)
        chars[i] = 97 + i % 26;
    
    return chars;
}

void displayArray(char chars[]) {
    for (int i = 0; i < NUMBER_OF_LETTERS; i++) {
        if ((i + 1) % 20 == 0)
            cout << chars[i] << " " << endl;
        else
            cout << chars[i] << " ";
    }
}

int * countLetters(char chars[]) {
    // Declare and create an array of 26 int
    int *counts = new int[26];

    // Initialize the array
    for (int i = 0; i < 26; i++)
        counts[i] = 0;

    // Count each lowercase letter
    for (int i = 0; i < NUMBER_OF_LETTERS; i++)
        counts[chars[i] - 'a']++;

    return counts;
}

// Display counts
void displayCounts(int counts[]) {
    for (int i = 0; i < 26; i++) {
        if ((i+1) % 20 == 0)
            cout << counts[i] << " " << static_cast<char>(i + 'a') << endl;
        else
            cout << counts[i] << " " << static_cast<char>(i + 'a') << " ";
    }
}
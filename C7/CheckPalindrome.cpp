#include <iostream>
#include <cstring>
using namespace std;

// Check if a string is a palindrome
bool isPalindrome(const char * const s) {
    int low = 0;
    int high = strlen(s) - 1;

    while (low < high) {
        if (s[low] != s[high])
            return false;
        low++;
        high--;
    }
    return true;
}

int main() {
    // Enter a string
    cout << "Enter a string: ";
    char s[80];
    cin.getline(s, 80, '\n');

    if (isPalindrome(s))
        cout << s << " is a palindrome" << endl;
    else
        cout << s << " is not a alindrome" << endl;

    return 0;
}
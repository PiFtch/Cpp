// 大写字母转换为小写字母
#include <iostream>
using namespace std;

const int OFFSET = 'a' - 'A';

char upperToLower(char upper);

char upperToLower (char upper) {
    return static_cast<char>(upper + OFFSET);
}

int main() {
    char upper;
    cout << "Input an upper case: ";
    cin >> upper;
    cout << "Its lower is " << upperToLower(upper) << '.' << endl;

    return 0;
}
#include <iostream>
// #include <string>
using namespace std;

int main() {
    /**
    
    string newString("Welcome to C++");
    cout << newString << endl;
    string newString2 = newString;
    cout << newString2 << endl;
    char charArray[] = {'G','o','o','d',' ','d','a','y','\0'};
    string message(charArray);
    cout << message;
    string str;
    str = "abc";

    */
    string s1 = "ABC";
    string s2 = s1;
    for (int i = s2.size() - 1; i >= 0; i--)
        cout << s2[i];

    string s3 = s1 + "DEFG";
    cout << s3 << endl;

    s1 += "ABC";
    cout << s1 << endl;

    s1 = "ABC";
    s2 = "ABC";
    cout << (s1 == s2) << endl;
    cout << (s1 != s2) << endl;
    cout << (s1 > s2) << endl;
    cout << (s1 >= s2) << endl;
    cout << (s1 < s2) << endl;
    cout << (s1 <= s2) << endl;

    string *str = new string("abc");
}
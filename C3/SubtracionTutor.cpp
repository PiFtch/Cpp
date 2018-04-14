#include <iostream>
#include <ctime>    // for time functon
#include <cstdlib>  // for rand and srand functions
using namespace std;
int main() {
    // 1. Generates two random single-digit integers
    srand(time(0));
    int number1 = rand() % 10;
    int number2 = rand() % 10;

    // 2. If number1 < number2, swap number1 with number2
    if (number1 < number2) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }

    // 3. Prompt the student to answer "what is number1 - number2>"
    cout << "What is " << number1 << " - " << number2 << "?";
    int answer;
    cin >> answer;

    // 4. Display the result
    if (answer == number1 - number2)
        cout << "Correct.";
    else
        cout << "Wrong.";

    return 0;
}
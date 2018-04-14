// 计算复利
#include <iostream>
using namespace std;

const double annualInterestRate = 0.05;
const double monthlyInterestRate = annualInterestRate / 12;

int main() {
    double principle = 0;   // 本金
    int month = 0;
    cout << "How many months? ";
    cin >> month;
    for (int i = 0; i < month; i++) {
        principle = (principle + 100) * (1 + monthlyInterestRate);
        cout << "Month " << i + 1 << ": $" << principle << endl; 
    }

    return 0;
}
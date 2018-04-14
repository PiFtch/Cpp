// 将摄氏温度转换为华氏温度
#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius);

double celsiusToFahrenheit(double celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

int main() {
    double celsius;
    cin >> celsius;
    cout << celsius << " celsius is " << celsiusToFahrenheit(celsius) << " fahrenheit." << endl;
    return 0; 
}
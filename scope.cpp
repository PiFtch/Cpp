/*
如果一个局部变量与一个全局变量同名， 使用 ::globalVariable可以访问全局变量
::运算符成为一元作用域解析运算符
*/

#include <iostream>
using namespace std;

int v1 = 10;

int main() {
    int v1 = 5;
    cout << "local variable v1 is " << v1 << endl;
    cout << "global variable v1 is " << ::v1 << endl;

    return 0;
}


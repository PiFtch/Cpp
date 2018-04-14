// 将ASCII码转换为字符
#include <iostream>
using namespace std;

int main() {
    uint8_t ascii = -8;
    cout << (unsigned)ascii << endl;
    cout << "Input an ACSII value: ";
    cin >> ascii;
    cout << "The character is " << (uint8_t)ascii << "   " << static_cast<char>(ascii) << endl;
    return 0;
}

/* 如果声明ascii时赋值-8，那么ascii值就是补码形式的0xff80
   如果使用cin给ascii赋值-8，那么使用cout输出是45（即对应ASCII字符-) */
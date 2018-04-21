#include <iostream>
using namespace std;

int main() {
    int *pvalue = new int;
    *pvalue = 45;
    pvalue = new int;
}
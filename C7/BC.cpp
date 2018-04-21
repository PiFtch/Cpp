#include <iostream>
using namespace std;

unsigned long long BC(unsigned n, unsigned k) {
    if (k == 0 || k == n)
        return 1;
    return BC(n-1, k-1) + BC(n-1, k);
}
int main() {
    unsigned long long res1, res2, res3;

    res1 = BC(1100, 110);
    res2 = BC(400, 900);
    res3 = BC(1500, 200);

    cout << res1 << res2 << res3;

    return 0;
}
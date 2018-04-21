#include <iostream>
using namespace std;

int *reverse(int const *list, const int size) {
    int result[6];

    for (int i = 0; i < size; i++)
        result[i] = list[size-1-i];

    return result;
}

int main() {
    int list[6] = {1, 2, 3, 4, 5, 6};
    int *plist = reverse(list, sizeof(list)/sizeof(int));

    return 0;
}
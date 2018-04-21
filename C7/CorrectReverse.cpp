#include <iostream>
#include <cstdlib>
using namespace std;

int *reverse(int const *list, const int size) {
    //int *result = new int[size];
    int *result = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
        result[i] = list[size-1-i];

   // free(result);

    return result;
}

int main() {
    int list[] = {1, 2, 3, 4, 5, 6};
    int *plist = reverse(list, sizeof(list)/sizeof(int));
    for (int i = 0; i < sizeof(list)/sizeof(int); i++)
        cout << plist[i] << "  ";
    free(plist);
    return 0;
}
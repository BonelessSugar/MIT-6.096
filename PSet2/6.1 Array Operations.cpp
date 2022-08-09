#include <iostream>

using namespace std;

void printArray(const int len, const int *arr) {
    int i;
    for (i = 0; i < len - 1; i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[i] << "\n";
}

int main() {
    const int arr[] = {1, 3, 5, 7};
    const int len = *(&arr + 1) - arr;
    printArray(len, arr);
    return 0;
}

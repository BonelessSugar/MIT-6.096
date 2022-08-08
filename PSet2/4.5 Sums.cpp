#include <iostream>

using namespace std;

int sum(const int len, const int *arr) {
    int sumOut = 0;
    for (int i = 0; i < len; i++) {
        sumOut += arr[i];
    }
    return sumOut;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << sum(len, arr);
    return 0;
}

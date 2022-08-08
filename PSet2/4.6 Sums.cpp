#include <iostream>

using namespace std;

int sum(const int len, const int *arr) {
    if (len == 0) {
        return 0;
    }
    return arr[len-1] + sum(len - 1, arr);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << sum(len, arr);
    return 0;
}

#include <iostream>

using namespace std;

void printArray(const int len, int *arr) {
    int i;
    for (i = 0; i < len - 1; i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[i] << "\n";
}

void reverse(const int len, int *arr) {
    //rounds down when you divide
    for (int i = 0; i < (len / 2); i++) {
        //store first number
        int temp = arr[i];
        //change first number to last number
        arr[i] = arr[len - 1 - i];
        //change last number to first number
        arr[len - 1 - i] = temp;
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    const int len = *(&arr + 1) - arr;
    printArray(len, arr);
    reverse(len, arr);
    printArray(len, arr);
    return 0;
}

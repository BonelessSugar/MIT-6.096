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

const int LENGTH = 3;
const int WIDTH = 4;

void transpose(const int input[][LENGTH], int output[][WIDTH]) {
    //input array:
    //4 arrays
    //3 elements in each array
    //output array:
        //{0,0} are the input array indecies
    //{0,0}{1,0}{2,0}{3,0}
    //{0,1}
    //input[1][0]
    //input[j][i]
    for (int i = 0; i < LENGTH; i++) {
        for (int j = 0; j < WIDTH; j++) {
            output[i][j] = input[j][i];
        }
    }
}

void reversePoint(const int len, int *arr) {
    for (int i = 0; i < len / 2; i++) {
        //store first number
        int temp = *(arr + i);
        //change first number to last number
        *(arr + i) = *(arr + len - 1 - i);
        //change last number to first number
        *(arr + len - 1 - i) = temp;
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    const int len = *(&arr + 1) - arr;
    cout << "6.1 Print Array:\n";
    printArray(len, arr);

    cout << "6.2 Reverse Array:\n";
    reverse(len, arr);
    printArray(len, arr);

    int wide[WIDTH][LENGTH] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int narrow[LENGTH][WIDTH];
    transpose(wide, narrow);
    cout << "6.3 Original Matrix:\n";
    for (int i = 0; i < WIDTH; i++) {
        printArray(LENGTH, wide[i]);
    }
    cout << "6.3 Transposed Matrix:\n";
    for (int i = 0; i < LENGTH; i++) {
        printArray(WIDTH, narrow[i]);
    }

    cout << "6.5 Reverse Array Pointers:\n";
    reversePoint(len, arr);
    printArray(len, arr);

    return 0;
}

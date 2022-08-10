#include <iostream>

using namespace std;

void swapPoint(int **ptr1, int **ptr2) {
    int *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int x = 5, y = 6;
    int *ptr1 = &x, *ptr2 = &y;
    swapPoint(&ptr1, &ptr2);
    cout << *ptr1 << " " << *ptr2; //prints 6, 5
    return 0;
}

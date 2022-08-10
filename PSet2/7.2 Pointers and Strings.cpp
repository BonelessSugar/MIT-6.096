#include <iostream>

using namespace std;

void swapRef(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x = 5;
    int y = 6;
    cout << x << " " << y << "\n";
    swapRef(x, y);
    cout << x << " " << y;
    return 0;
}

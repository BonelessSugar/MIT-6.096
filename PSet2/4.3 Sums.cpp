#include <iostream>

using namespace std;

int sum(int a, int b);
int sum(int a, int b, int c);
int sum(int a, int b, int c, int d);

int main() {
    cout << sum(1, 2) << "\n";
    cout << sum(1, 2, 3) << "\n";
    cout << sum(1, 2, 3, 4);
    return 0;
}

//two inputs
int sum(int a, int b) {
    return a + b;
}

//three inputs
int sum(int a, int b, int c) {
    return a + b + c;
}

//four inputs
int sum(int a, int b, int c, int d) {
    return a + b + c + d;
}

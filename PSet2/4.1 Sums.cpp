#include <iostream>

using namespace std;

int sum(int a, int b);
double sum(double a, double b);

int main() {
    cout << sum(1, 2) << "\n";
    cout << sum(1.1, 2.2);
    return 0;
}

//write a function that returns the sum of two ints
int sum(int a, int b) {
    return a + b;
}

//write a function that returns the sum of two doubles
double sum(double a, double b) {
    return a + b;
}

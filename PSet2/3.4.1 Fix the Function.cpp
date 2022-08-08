#include <iostream>
#include <cstdlib> // contains some math functions

using namespace std;

int difference(const int x, const int y) {
    return abs(x - y); // abs(n) returns absolute value of n
}

int main() {
    std::cout << difference(24, 1238);
    return 0;
}

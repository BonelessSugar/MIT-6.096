#include <iostream>

using namespace std;

int main() {
    char *oddOrEven = "Never odd or even";
    char *nthCharPtr = &oddOrEven[5];
    cout << "|" << *nthCharPtr << "|\n";

    nthCharPtr = nthCharPtr - 2;

    cout << "|" << *nthCharPtr << "|\n";

    char **pointerPtr = &nthCharPtr;

    cout << "|" << pointerPtr << "|\n";

    cout << "|" << *pointerPtr << "|\n";

    nthCharPtr++;
    cout << "|" << *nthCharPtr << "|\n";

    cout << "|" << nthCharPtr - oddOrEven << "|\n";
    return 0;
}

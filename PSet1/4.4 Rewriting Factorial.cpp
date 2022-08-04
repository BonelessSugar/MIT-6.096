#include <iostream>

using namespace std;

int main()
{
    //max number is 16 for int, turns into a signed int afterwards
    short number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The factorial of " << number << " is ";
    //changed int to double
    double accumulator = 1;
    if (number < 0) {
        for (; number < 0; accumulator *= number++);
    }
    else {
        for (; number > 0; accumulator *= number--);
    }
    cout << accumulator << ".\n";

    return 0;
}

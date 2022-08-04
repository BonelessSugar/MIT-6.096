#include <iostream>

using namespace std;

int main()
{
    short number;
    int accumulator = 1;
    cout << "Enter a number: ";
    cin >> number;

    switch(number) {
    case 10:
        accumulator *= 10;
    case 9:
        accumulator *= 9;
    case 8:
        accumulator *= 8;
    case 7:
        accumulator *= 7;
    case 6:
        accumulator *= 6;
    case 5:
        accumulator *= 5;
    case 4:
        accumulator *= 4;
    case 3:
        accumulator *= 3;
    case 2:
        accumulator *= 2;
        break;
    case 1:
    case 0:
        break;
    default:
        cout << "Input not handled.";
    }
    
    if (number <= 10 && number >= 0) {
        cout << "The factorial of " << number << " is " << accumulator << ".\n";
    }
    
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    while (true) {
        int N;
        cout << "Input an integer: ";
        cin >> N;
        //use break command
        if (N < 0) {
            cout << "Goodbye!";
            break;
        }
        int result;
        //use ternary operator
        result = ((N % 5 == 0) && (N > 0)) ? N / 5 : -1;
        //use continue command
        if (result == -1) {
            continue;
        }
        cout << result << "\n";
    }
    return 0;
}

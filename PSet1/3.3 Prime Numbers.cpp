#include <iostream>

using namespace std;

int main()
{
    int N;
    int primeCount;
    int i = 1;
    cout << "Enter how many prime numbers to find: ";
    cin >> N;
    while (primeCount != N) {
        int isPrime = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                isPrime++;
            }
        }
        if (isPrime == 2) {
            cout << i << "\n";
            primeCount++;
        }
        i++;
    }
    return 0;
}

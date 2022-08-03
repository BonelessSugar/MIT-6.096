#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "How many times to print?: ";
    cin >> n;
    const char * myOut = "Hello, World!";
    
    //for loop
    for (int i = 0; i < n; i++) {
        cout << myOut << "\n";
    }
    cout << "\n";
    
    //while loop
    int j = n;
    while (j > 0) {
        cout << myOut << "\n";
        j--;
    }
    cout << "\n";
    
    //do-while loop
    int k = n;
    do {
        cout << myOut << "\n";
        k--;
    } while (k > 0);
    return 0;
}

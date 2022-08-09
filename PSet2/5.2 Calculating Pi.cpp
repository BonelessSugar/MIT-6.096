#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    srand(time(0));
    int inCircle = 0;
    int n;
    cout << "How many times would you like to throw darts? : ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        double x = rand() / (double)RAND_MAX;
        double y = rand() / (double)RAND_MAX;
        //d^2 = x^2 + y^2
        //d = sqrt(x^2 + y^2)
        //if d >= 1, it is within the circle
        double d = sqrt(pow(x,2) + pow(y,2));
        if (d <= 1) {
            inCircle++;
        }
    }
}

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

double piCalc(int n) {
    int inCircle = 0;
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
    //pi = 4 * ((a/4)/r^2)
    //a/4 = amount of darts in circle quadrant
        //a/4 = inCircle
    //r^2 = number of throws
        //r^2 = n
    double myPi = 4 * (double)inCircle / n;
    return myPi;
}

int main() {
    srand(time(0));
    int n;
    cout << "How many times would you like to throw darts?: ";
    cin >> n;
    cout << "The value of Pi is: " << piCalc(n);
}

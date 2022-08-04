#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "How many integers? : ";
    cin >> N;
    int userIn [N];
    double total;
    int theMax;
    int theMin;
    cout << "Please input integers: \n";
    for (int i = 0; i < N; i++) {
        cin >> userIn[i];
        total += userIn[i];
        if (userIn[i] > theMax) {
            theMax = userIn[i];
        }
        if (i == 0) {
            theMin = userIn[i];
        }
        else if (userIn[i] < theMin) {
            theMin = userIn[i];
        }
    }
    cout << "Mean: " << total/N << "\n";
    cout << "Max: " << theMax << "\n";
    cout << "Min: " << theMin << "\n";
    cout << "Range: " << theMax - theMin << "\n";
    return 0;
}

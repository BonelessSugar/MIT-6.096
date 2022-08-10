#include <iostream>

using namespace std;

int lengthStr(const char *inputStr) {
    char strChar = *inputStr;
    int nextChar = 0;
    while (strChar != NULL) {
        cout << strChar;
        nextChar++;
        strChar = *(inputStr + nextChar);
    }
}

int main() {
    const char *inputStr = "hello";
    lengthStr(inputStr);
    return 0;
}

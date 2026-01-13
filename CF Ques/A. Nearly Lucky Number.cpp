#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int countLuckyDigits = 0;

    // Count lucky digits (4 and 7)
    for (char c : n) {
        if (c == '4' || c == '7') {
            countLuckyDigits++;
        }
    }

    // Check if count itself is a lucky number
    if (countLuckyDigits == 0) {
        cout << "NO";
        return 0;
    }

    while (countLuckyDigits > 0) {
        int digit = countLuckyDigits % 10;
        if (digit != 4 && digit != 7) {
            cout << "NO";
            return 0;
        }
        countLuckyDigits /= 10;
    }

    cout << "YES";
    return 0;
}
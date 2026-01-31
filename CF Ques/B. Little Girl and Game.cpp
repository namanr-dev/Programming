#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;

    int odd = 0;
    for (int f : freq) {
        if (f % 2 == 1) odd++;
    }

    if (odd <= 1 || odd % 2 == 1)
        cout << "First\n";
    else
        cout << "Second\n";

    return 0;
}
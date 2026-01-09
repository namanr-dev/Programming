#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <cassert>
#include <numeric>
#include <tuple>
#include <array>
#include <functional>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <utility>

using namespace std;

bool hasDistinctDigits(int year) {
    set<int> digits;
    while (year > 0) {
        int d = year % 10;
        if (digits.count(d)) return false;
        digits.insert(d);
        year /= 10;
    }
    return true;
}
int main() {
    int y;
    cin >> y;

    for (int year = y + 1; ; year++) {
        if (hasDistinctDigits(year)) {
            cout << year << endl;
            break;
        }
    }

    return 0;
}
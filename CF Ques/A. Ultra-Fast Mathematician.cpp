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
int main() {
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++) {
        cout << (a[i] == b[i] ? '0' : '1');
    }
    cout << endl;
    return 0;
}
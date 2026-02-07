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

class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size(), res = n;
        int a = 0, b = 0;

        for (auto& c : s)
            a += c & 1;             //'a' = 97 (odd)

        for (auto& c : s) {
            a -= c & 1;
            res = min(res, a + b);
            b += ~c & 1;           //'b' = 98 (even)
        }

        return res;
    }
};

int main() {

    

    return 0;
}
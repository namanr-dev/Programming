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
class Solution{
    public:
    int maximalRectangle(vector<vector<char>>& grid){
        int m = grid.size();
        int n = grid[0].size();
        int areaMax = 0;
        for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1') {
                int minWidth = INT_MAX;
                for (int x = i; x < m && grid[x][j] == '1'; x++) {
                    int currentWidth = 0;
                    for (int y = j; y < n && grid[x][y] == '1'; y++) {
                        currentWidth++;
                    }
                    minWidth = min(minWidth, currentWidth);
                    int height = (x - i + 1);
                        areaMax = max(areaMax, minWidth * height);
                    }
                }
            }
        }
        return areaMax;
    }
};
int main() {

    

    return 0;
}
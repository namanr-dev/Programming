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
    pair<double,double> area(double y, vector<vector<int>>& squares){
         double areaAbove = 0, areaBelow = 0;
            for (auto& square : squares) {
                int x = square[0], y1 = square[1];
                long long l = square[2];
                int y2 = y1 + l;                
                if (y <= y1) {
                    areaAbove += (long long )l*l;  
                } else if (y >= y2) {
                    areaBelow += (long long)l*l; 
                } else {
                    double abovePart = (y2 - y) *  l;
                    double belowPart = (y - y1) * l;
                    areaAbove += abovePart;
                    areaBelow += belowPart;
                }
            }
        return make_pair(areaAbove, areaBelow);
        
    }
public:
    double separateSquares(vector<vector<int>>& squares) {
       
        double left = DBL_MAX, right = DBL_MIN; 
        for (int i = 0; i < squares.size(); i++) {
            left = min(left, (double)squares[i][1]);  
            right = max(right, (double)(squares[i][1] + squares[i][2]));  
        }

        while(right - left > 1e-5){
            double mid = left + (right - left) / 2.0;;
            pair<double,double> p = area(mid,squares);
            double areaAbove = p.first;
            double areaBelow = p.second;
            if (areaAbove > areaBelow) {
                left = mid; 
            } else {
                right = mid; 
            }
        }
        return left;
    }
};

int main() {

    

    return 0;
}
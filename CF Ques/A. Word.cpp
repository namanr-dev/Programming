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
#include <cctype>

using namespace std;

int main() {
    string s;
    cin>>s;
    int upper =0;
    for(char ch: s){
        if(65 <= (int)ch && (int)ch <= 90) upper++;
    }
    int lower = s.length() - upper;
    if(lower < upper){
        for (char &c : s) {
            c = toupper(c);
        }
    }else{
        for (char &c : s) {
            c = tolower(c);
        }
    }
    cout<<s<<endl;

    return 0;
}
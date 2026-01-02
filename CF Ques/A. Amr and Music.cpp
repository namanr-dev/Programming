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
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<pair<int,int>> days(n);
    for(int i =0; i < n; i++){
        cin>>days[i].first;
        days[i].second = i+1;
    }
    sort(days.begin(), days.end());
    int count = 0;
    vector<int> idx;
    for(int i = 0; i < n; i++){
        if(k >= days[i].first){
            k -= days[i].first;
            count++;
            idx.push_back(days[i].second);
        }else{
            break;
        }
    }
    cout<<count<<endl;
    for(auto x: idx) cout<<x<<" ";
    return 0;
}
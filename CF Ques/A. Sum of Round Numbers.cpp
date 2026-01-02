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

void solve(){
    int n;
    cin>>n;
    int mul = 10;
    vector<int> arr;
    while(n){
        
        int rem = n%mul;
        if(rem != 0){
            arr.push_back(rem);
            n = n - rem;
        }
        mul *= 10;
    }
    cout<<arr.size()<<endl;
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
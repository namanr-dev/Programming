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
    string s;
    cin>>s;
    string temps = s;
    reverse(temps.begin(), temps.end());
    if(s == temps){
        cout<<"YES"<<endl;
    }else{
        for(int i =0; i < s.size()/2; i++){
            if(s[i] == s[s.size() - i - 1]) continue;
            if(abs(s[i] - s[s.size() - i - 1]) == 2) continue;
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }
}
int main() {

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
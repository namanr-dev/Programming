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
    string s;
    cin>>n>>s;
    int countOne =0;
    
    int count = 0;
    int ans = n;
    for(int i =0; i < n; i++){
        count++;
        if(s[i] == '1'){
            ans = max(ans,(i+1)*2);
            count++;
        }
    }
        ans = max(ans,count);
    reverse(s.begin(), s.end());
    count =0;
    for(int i =0; i < n; i++){
        count++;
        if(s[i] == '1'){
            ans = max(ans,(i+1)*2);
            count++;
        }
    }
    ans = max(ans,count);
    cout<<ans<<endl;
}
int main() {

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
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

    long long num;
    cin>>num;
    long long ans =0;
    string s="";
    while(num){
        s.push_back(num%10+'0');
        num = num/10;
    }
    reverse(s.begin(), s.end());
    if( s[0] >= '5' && s[0] != '9'){
        s[0] = '9' - s[0] +'0';
    }

    for(int i =1; i < s.length(); i++){
        if( s[i] >= '5' && s[i] <= '9'){
            s[i] = '9' - s[i] +'0';
        }   
    }

    for(char i : s){
        ans = ans*10 + (i-'0')*1LL;
    }
    cout<<ans<<endl;

    return 0;
}
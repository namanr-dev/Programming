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

    string s;
    cin>>s;
    int i = 0;
    while( i < s.size()){
        if(s[i] == '.'){
            cout<<0;
            i++;
        }else if(
            (i < s.size() -1) && s[i] == '-'  
        ){
            if(s[i+1] == '.'){
                cout<<1;
            }else{
                cout<<2;
            }
            i = i + 2;
        }
    }
    cout<<endl;

    return 0;
}
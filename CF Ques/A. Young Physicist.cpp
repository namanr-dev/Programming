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
    int x , y  , z ;
    x = y = z = 0;
    for(int i = 0; i < n; i++){
        int xi,yi,zi;
        cin>>xi>>yi>>zi;
        x += xi;
        y += yi;
        z += zi;
    }
    if(x == 0 && y ==0 && z ==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
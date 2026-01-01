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
    int x= 0;
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s == "X++"){
            x++;
        }else if(s == "++X"){
            ++x;

        }else if(s == "--X"){
            --x;
        }else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}
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
    // unordered_map<string,int> dp;
    int dp[1005][1005];
    // int solve(int i,  int j , int m , int n , string &s1 , string& s2){
    //     if( i < 0  && j >= 0 ){
    //         int sum = 0;
    //         while(j >= 0){
    //             sum += s2[j];
    //             j--;
    //         }
    //         return sum;
    //     }
    //     if( j < 0  && i >= 0 ){
    //         int sum = 0;
    //         while(i >= 0){
    //             sum += s1[i];
    //             i--;
    //         }
    //         return sum;
    //         // return s1[i] + solve(i-1,j,s1,s2,mp)
    //     }
    //     if(i < 0 && j < 0 ){
    //         return 0;
    //     }
    //     string key = to_string(i) + '_' + to_string(j);
    //     if(dp.find(key) != dp.end()) return dp[key];

    //     if(s1[i] == s2[j] ){
    //         return dp[key] = solve(i-1 , j-1  , s1, s2) ;
    //     }
    //     else{
    //         // not equal
    //         int delete_i = s1[i] +  solve(i-1, j  ,s1 , s2);
    //         int delete_j = s2[j] + solve(i,j-1, s1 , s2);
    //         return dp[key] =  min(delete_i,delete_j);
    //     }
    int m,n;
        int solve(int i,  int j ,string &s1 , string& s2){
            if(i>=m && j >= n) return 0;
            if(dp[i][j] != -1) return dp[i][j] ;
            if(i >= m) return dp[i][j] =  s2[j] + solve(i , j + 1 ,s1, s2);
            else if(j >= n) return dp[i][j] =  s1[i] + solve(i +1  , j  ,s1, s2);
        // string key = to_string(i) + '_' + to_string(j);

        if(s1[i] == s2[j] ){
            return dp[i][j]  = solve(i+1 , j+1 ,  s1, s2) ;
        }
        // else{
            // not equal
            int delete_i = s1[i] +  solve(i+1, j , s1 , s2);
            int delete_j = s2[j] + solve(i,j+1, s1 , s2);
            return dp[i][j]  =  min(delete_i,delete_j);
        // }
    }
public:
    int minimumDeleteSum(string s1, string s2) {
        // vector<vector<int>> dp(s1.length() + 1 , vector<int> ( s2.length() + 1 , -1));
        // return solve(s1.length() -1,s2.length() -1,s1,s2);
        m = s1.length();
        n = s2.length();
        memset(dp , -1 ,sizeof(dp));
        return solve(0,0,s1,s2);



        // for(int i = s1.length)
    }
};

int main() {

    

    return 0;
}
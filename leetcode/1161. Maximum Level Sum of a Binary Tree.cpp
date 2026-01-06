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

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        pair<int,int> ans = {-1e9,1};
        //.  sum , lvl

        queue<TreeNode*> qu;
        int lvl = 0;
        qu.push(root);
        while(!qu.empty()){
            int size = qu.size();
            int sum = 0;
            lvl++;
            while(size--){
                auto x = qu.front();
                qu.pop();
                if(x->left != nullptr){
                    qu.push(x->left);
                }
                if(x->right != nullptr){
                    qu.push(x->right);
                }
                sum += x->val;
            }
            if(sum > ans.first){
                ans.first = sum;
                ans.second = lvl;
            }
        }

        return ans.second;
        
    }
};
int main() {

    

    return 0;
}
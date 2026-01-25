#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<int, vector<int>> pos;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x].push_back(i);
    }

    vector<pair<int, int>> ans;

    for (auto &p : pos) {
        const vector<int> &v = p.second;
        if (v.size() == 1) {
            ans.push_back({p.first, 0});
        } else {
            int d = v[1] - v[0];
            bool ok = true;
            for (int i = 2; i < (int)v.size(); i++) {
                if (v[i] - v[i - 1] != d) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                ans.push_back({p.first, d});
            }
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans.size() << "\n";
    for (auto &x : ans) {
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int a,b,x;
    cin >> a >> b >> x;
    vector<pair<int,int>> va, vb;
    int cur = a, ops = 0;
    while (true) {
        va.push_back({cur, ops});
        if (cur == 0) break;
        cur /= x;
        ops++;
    }
    cur = b;
    ops = 0;
    while (true) {
        vb.push_back({cur, ops});
        if (cur == 0) break;
        cur /= x;
        ops++;
    }
    int ans = LLONG_MAX;
for (auto p1 :va){
    for (auto p2:vb) {
        ans = min(ans,
                p1.second + p2.second +
                abs(p1.first - p2.first));
    }
}
    cout <<ans<< '
';
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
}
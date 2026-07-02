#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
const int inf = 1e18;
 
void solve() {
    int n; cin >> n;
    vector<int> v(n+1);
 
    for(int i = 1;i <= n;i++) cin >> v[i];
 
    vector<int> l(n+1), r(n+2);
    l[0] = -inf;
 
    for(int i = 1;i <= n;i++) {
        l[i] = v[i] + i;
        l[i] = max(l[i], l[i-1]);
 
        r[i] = v[i] - i;
    }
 
    r[n+1] = -inf;
    for(int i = n;i >= 1;i--) r[i] = max(r[i], r[i+1]);
 
    int ans = -inf;
    for(int i = 2;i < n;i++) {
        ans = max(ans, l[i-1] + v[i] + r[i+1]);
    }
 
    cout << ans << "
";
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
 
//    freopen("in.txt", "r", stdin);
 
    int t; cin >> t;
    while(t--) solve();
}
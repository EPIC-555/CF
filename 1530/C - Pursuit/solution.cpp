#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n), b(n);
 
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
 
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
 
    vector<int> prefA(n + 1, 0), prefB(n + 1, 0);
 
    for (int i = 0; i < n; i++) {
        prefA[i + 1] = prefA[i] + a[i];
        prefB[i + 1] = prefB[i] + b[i];
    }
 
    int ans = 0;
 
    while (true) {
        int k = n + ans;
        int cnt = k - k / 4;
 
        int sumA = 100 * ans + prefA[cnt - ans];
        int sumB = prefB[min(cnt, n)];
 
        if (sumA >= sumB) break;
 
        ans++;
    }
 
    cout << ans << "
";
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) solve();
 
    return 0;
}
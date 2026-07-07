#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
 
    int gEven = 0, gOdd = 0;
 
    // gcd of even indices
    for (int i = 0; i < n; i += 2)
        gEven = __gcd(gEven, a[i]);
 
    bool ok = true;
 
    for (int i = 1; i < n; i += 2) {
        if (a[i] % gEven == 0) {
            ok = false;
            break;
        }
    }
 
    if (ok) {
        cout << gEven << '
';
        return;
    }
 
    // gcd of odd indices
    for (int i = 1; i < n; i += 2)
        gOdd = __gcd(gOdd, a[i]);
 
    ok = true;
 
    for (int i = 0; i < n; i += 2) {
        if (a[i] % gOdd == 0) {
            ok = false;
            break;
        }
    }
 
    if (ok)
        cout << gOdd << '
';
    else
        cout << 0 << '
';
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--)
        solve();
}
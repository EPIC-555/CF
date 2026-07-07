#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define vi vector<int>
 
bool check(vi &a, int x) {
    int l = 0, r = a.size() - 1;
 
    while (l < r) {
        if (a[l] == a[r]) {
            l++;
            r--;
        }
        else if (a[l] == x) {
            l++;
        }
        else if (a[r] == x) {
            r--;
        }
        else {
            return false;
        }
    }
 
    return true;
}
 
void solve() {
    int n;
    cin >> n;
 
    vi a(n);
    for (int &x : a) cin >> x;
 
    int l = 0, r = n - 1;
 
    while (l < r && a[l] == a[r]) {
        l++;
        r--;
    }
 
    // Already a palindrome
    if (l >= r) {
        cout << "YES
";
        return;
    }
 
    if (check(a, a[l]) || check(a, a[r]))
        cout << "YES
";
    else
        cout << "NO
";
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
}
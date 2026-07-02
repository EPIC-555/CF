#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<long long> six, two, none, three;
 
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
 
        bool d2 = (x % 2 == 0);
        bool d3 = (x % 3 == 0);
 
        if (d2 && d3) six.push_back(x);
        else if (d2) two.push_back(x);
        else if (d3) three.push_back(x);
        else none.push_back(x);
    }
 
    for (auto x : six) cout << x << " ";
    for (auto x : two) cout << x << " ";
    for (auto x : none) cout << x << " ";
    for (auto x : three) cout << x << " ";
 
    cout << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) solve();
}
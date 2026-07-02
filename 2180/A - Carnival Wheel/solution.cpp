#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;
 
        int g = __gcd(l, b);
        cout << l - g + (a % g) << '
';
    }
    return 0;
}
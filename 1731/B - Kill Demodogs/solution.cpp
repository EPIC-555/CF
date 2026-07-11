#include <bits/stdc++.h>
#define ll long long
const int mod = 1e9 + 7;
using namespace std;
 
 
void solve() {
    long long n;
    cin >> n;
 
    n %= mod;
 
    long long ans = n;
    ans = ans * ((n + 1) % mod) % mod;
    ans = ans * ((4 * n - 1 + mod) % mod) % mod;
    ans = ans * 337 % mod;
 
    cout << ans << '
';
}
 
int main() {
	int t;
	cin >> t;
 
	while (t--) {
		solve();
	}
 
}
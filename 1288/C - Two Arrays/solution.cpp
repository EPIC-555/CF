#include <bits/stdc++.h>
using namespace std;
 
static const long long MOD = 1000000007;
static const int MAXN = 2005;
 
long long fact[MAXN], invfact[MAXN];
 
long long modpow(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
 
void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }
 
    invfact[MAXN - 1] = modpow(fact[MAXN - 1], MOD - 2);
    for (int i = MAXN - 1; i > 0; i--) {
        invfact[i - 1] = invfact[i] * i % MOD;
    }
}
 
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % MOD * invfact[n - r] % MOD;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    precompute();
 
    int n, m;
    cin >> n >> m;
 
    int total = n + 2 * m - 1;
    long long ans = nCr(total, 2 * m);
 
    cout << ans << "
";
    return 0;
}
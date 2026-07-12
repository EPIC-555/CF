#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007LL;
const int MAXN = 200005;
long long pow2[MAXN];
 
int main(){
    pow2[0] = 1;
    for (int i = 1; i < MAXN; i++) pow2[i] = (pow2[i-1]*2) % MOD;
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<long long> a(n);
        for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
        vector<long long> distinctVals;
        distinctVals.reserve(n);
        for (int i = 0; i < n; i++) {
            if (i == 0 || a[i] != a[i-1]) distinctVals.push_back(a[i]);
        }
 
        int g = (int)distinctVals.size();
        bool hasNeg1 = (distinctVals[0] == -1);
        int startPos = hasNeg1 ? 1 : 0;
 
        long long P = 0;
        for (int j = startPos; j + 1 < g; j++) {
            if (distinctVals[j+1] == distinctVals[j] + 1) P++;
        }
        long long distinctCount = (1 + (hasNeg1 ? P : 0)) % MOD;
        int exponent = n - g; 
        long long ans = (distinctCount % MOD) * pow2[exponent] % MOD;
 
        printf("%lld
", ans);
    }
    return 0;
}
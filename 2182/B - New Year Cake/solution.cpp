#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
 
        int ans = 0;
 
        for (int k = 1; k <= 20; k++) {
            long long white = 0, dark = 0;
 
            for (int i = 0; i < k; i++) {
                long long need = 1LL << i;
                if (i % 2 == 0)
                    white += need;
                else
                    dark += need;
            }
 
            
            bool ok1 = (white <= a && dark <= b);
            
            bool ok2 = (white <= b && dark <= a);
 
            if (ok1 || ok2)
                ans = k;
        }
 
        cout << ans << "
";
    }
    return 0;
}
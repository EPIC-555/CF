#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        // find index of last '1' (exists by statement)
        int last_one = -1;
        for (int i = 0; i < n; ++i) if (s[i] == '1') last_one = i;
 
        // last is initialized so that distances wrap automatically
        int last = last_one - n; // may be negative
        int ans = 0;
 
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                last = i;
            } else {
                int dist = i - last; // gives (i - prev_one) or (i + n - last_one) when prev doesn't exist
                ans = max(ans, dist);
            }
        }
 
        cout << ans << "
";
    }
    return 0;
}
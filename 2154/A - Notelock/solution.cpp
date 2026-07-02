#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
 
        if (s.find('1') == string::npos) {
            cout << 0 << "
";
            continue;
        }
 
        int last_one = -k;  
        int ans = 0;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (i - last_one >= k) {
                    ans++; 
                    last_one = i;
                } else {
                    last_one = i;
                }
            }
        }
 
        cout << ans << "
";
    }
 
    return 0;
}
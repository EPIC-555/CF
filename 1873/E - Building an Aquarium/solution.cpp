#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        long long low = *min_element(a.begin(), a.end());
        long long high = low + x;
        long long ans = low;
 
        while (low <= high) {
            long long mid = low + (high - low) / 2;
 
            long long water = 0;
            for (long long h : a) {
                if (h < mid) {
                    water += (mid - h);
                }
            }
 
            if (water <= x) {
                ans = mid;        
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
 
        cout << ans << "
";
    }
 
    return 0;
}
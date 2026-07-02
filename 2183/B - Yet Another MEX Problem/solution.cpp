#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> cnt(k, 0);
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x < k) cnt[x]++;
        }
        int m = 0;
        while (m < k && cnt[m] > 0) ++m;
        cout << min(m, k - 1) << "
";
    }
    return 0;
}
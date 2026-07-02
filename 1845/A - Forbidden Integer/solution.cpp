#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k, x;
    cin >> n >> k >> x;
 
    // If 1 is allowed
    if (x != 1) {
        cout << "YES
";
        cout << n << "
";
 
        for (int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        cout << "
";
    }
    else {
 
        // 1 is forbidden
 
        // If only 1 exists
        if (k == 1) {
            cout << "NO
";
        }
 
        else {
 
            // If n is even -> use all 2s
            if (n % 2 == 0) {
                cout << "YES
";
                cout << n / 2 << "
";
 
                for (int i = 0; i < n / 2; i++) {
                    cout << 2 << " ";
                }
                cout << "
";
            }
 
            else {
 
                // n is odd
 
                // Need 3 to make odd sum
                if (k >= 3) {
 
                    cout << "YES
";
                    cout << 1 + (n - 3) / 2 << "
";
 
                    cout << 3 << " ";
 
                    for (int i = 0; i < (n - 3) / 2; i++) {
                        cout << 2 << " ";
                    }
 
                    cout << "
";
                }
                else {
                    cout << "NO
";
                }
            }
        }
    }
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
}
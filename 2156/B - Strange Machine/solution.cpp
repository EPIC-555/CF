#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
const int M = 1000;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<int> a(q);
        for (int i = 0; i < q; i++) {
            cin >> a[i];
        }
        
        if (find(s.begin(), s.end(), 'B') == s.end()) {
            for (int i = 0; i < q; i++) {
                cout << a[i] << "
";
            }
        } else {
            vector<vector<int>> dp(n, vector<int>(M, 0));
            for (int x = 1; x < M; x++) {
                for (int i = 0; i < n; i++) {
                    int next_i = (i + 1) % n;
                    if (s[i] == 'A') {
                        dp[i][x] = 1 + dp[next_i][x - 1];
                    } else {
                        dp[i][x] = 1 + dp[next_i][x / 2];
                    }
                }
            }
            
            for (int i = 0; i < q; i++) {
                int a_val = a[i];
                if (a_val == 0) {
                    cout << 0 << "
";
                } else {
                    int current = a_val;
                    int idx = 0;
                    int total_steps = 0;
                    while (current >= M && current != 0) {
                        if (s[idx] == 'A') {
                            current--;
                        } else {
                            current /= 2;
                        }
                        total_steps++;
                        idx = (idx + 1) % n;
                    }
                    if (current != 0) {
                        total_steps += dp[idx][current];
                    }
                    cout << total_steps << "
";
                }
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        // Check if the string is already sorted (non-decreasing)
        bool sorted = true;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == '1' && s[i + 1] == '0') {
                sorted = false;
                break;
            }
        }
        
        if (sorted) {
            cout << "Bob
";
        } else {
            cout << "Alice
";
            int zeros = count(s.begin(), s.end(), '0');
            vector<int> indices;
            
            // Indices in the left part (1..zeros) that contain '1'
            for (int i = 1; i <= zeros; ++i) {
                if (s[i - 1] == '1') {
                    indices.push_back(i);
                }
            }
            // Indices in the right part (zeros+1..n) that contain '0'
            for (int i = zeros + 1; i <= n; ++i) {
                if (s[i - 1] == '0') {
                    indices.push_back(i);
                }
            }
            
            cout << indices.size() << '
';
            for (size_t i = 0; i < indices.size(); ++i) {
                cout << indices[i] << " 
"[i == indices.size() - 1];
            }
        }
    }
    
    return 0;
}
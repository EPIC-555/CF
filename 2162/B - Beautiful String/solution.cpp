#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        bool found = false;
        vector<int> indices_found;
        for (int mask = 0; mask < (1 << n); mask++) {
            string p_str = "";
            vector<int> indices;
            string x_str = "";
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    p_str += s[i];
                    indices.push_back(i + 1);
                } else {
                    x_str += s[i];
                }
            }
            // Check if p_str is non-decreasing
            bool non_decreasing = true;
            for (size_t j = 1; j < p_str.size(); j++) {
                if (p_str[j - 1] > p_str[j]) {
                    non_decreasing = false;
                    break;
                }
            }
            if (!non_decreasing) continue;
            // Check if x_str is palindrome
            string rev_x = x_str;
            reverse(rev_x.begin(), rev_x.end());
            if (x_str == rev_x) {
                found = true;
                indices_found = indices;
                break;
            }
        }
        if (found) {
            cout << indices_found.size() << endl;
            if (!indices_found.empty()) {
                for (size_t i = 0; i < indices_found.size(); i++) {
                    if (i > 0) cout << " ";
                    cout << indices_found[i];
                }
                cout << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
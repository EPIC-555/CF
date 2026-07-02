#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
// Compute minimum adjacent swaps to bring all characters at given positions together.
ll compute_cost(vector<int>& pos) {
    int k = pos.size();
    if (k <= 1) return 0; // already together
    // q[i] = pos[i] - i
    vector<ll> q(k);
    for (int i = 0; i < k; ++i) {
        q[i] = pos[i] - i;
    }
    // q is already non-decreasing because pos is increasing.
    ll median = q[k/2]; // upper median for even k (any median works)
    ll cost = 0;
    for (int i = 0; i < k; ++i) {
        cost += abs(q[i] - median);
    }
    return cost;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> a_pos, b_pos;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'a') a_pos.push_back(i);
            else b_pos.push_back(i);
        }
        // If one type is missing, already valid.
        if (a_pos.empty() || b_pos.empty()) {
            cout << "0
";
            continue;
        }
        ll cost_a = compute_cost(a_pos);
        ll cost_b = compute_cost(b_pos);
        cout << min(cost_a, cost_b) << "
";
    }
    return 0;
}
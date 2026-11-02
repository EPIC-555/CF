#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
ll compute_cost(vector<int>& pos) {
    int k = pos.size();
    if (k <= 1) return 0; 
    
    vector<ll> q(k);
    for (int i = 0; i < k; ++i) {
        q[i] = pos[i] - i;
    }
 
    ll median = q[k/2]; 
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
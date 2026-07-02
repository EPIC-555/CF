#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<vector<int>> adj(n + 1);
        vector<int> deg(n + 1, 0);
        
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }
        
        
        vector<int> dist(n + 1, -1);
        vector<int> level_count(n + 1, 0); 
        queue<int> q;
        q.push(1);
        dist[1] = 1;
        level_count[1] = 1;
        
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            
            for (int v : adj[u]) {
                if (dist[v] == -1) {
                    dist[v] = dist[u] + 1;
                    level_count[dist[v]]++;
                    q.push(v);
                }
            }
        }
        
        
        int max_level_size = 0;
        for (int i = 1; i <= n; i++) {
            max_level_size = max(max_level_size, level_count[i]);
        }
        
    
        int max_deg_val = 0;
        for (int u = 1; u <= n; u++) {
            if (u == 1) {
                max_deg_val = max(max_deg_val, deg[1] + 1);
            } else {
                max_deg_val = max(max_deg_val, deg[u]);
            }
        }
        
        
        int ans = max(max_level_size, max_deg_val);
        cout << ans << "
";
    }
    
    return 0;
}
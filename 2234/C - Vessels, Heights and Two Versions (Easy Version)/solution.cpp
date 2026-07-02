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
        vector<long long> h(n);
        for (int i = 0; i < n; i++) cin >> h[i]; 
        for (int l = 0; l < n; l++) {
            vector<long long> pmax(n, 0);
            long long run = 0;
        for (int j = 1; j < n; j++) {
                run = max(run, h[(l + j - 1) % n]);
             pmax[j] = run;
          }
           vector<long long> smax(n, 0);
          run = 0;
          for (int j = n - 1; j >= 1; j--) {
         run = max(run, h[(l + j) % n]);
                smax[j] = run;
            }
            
           long long total = 0;
            for (int j = 1; j < n; j++)
                total += min(pmax[j], smax[j]);
        
            cout << total;
            if (l < n - 1) cout << ' ';   }
        cout << '
';
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i]; 
        }
      string cur=v[0];
        
        for(int i=1;i<n;i++){
             string option1 = cur + v[i];   
            string option2 = v[i] + cur;   
 
            cur = min(option1, option2); 
        }
 
        cout << cur << '
';
 
 
 
 
    }
    return 0;
}
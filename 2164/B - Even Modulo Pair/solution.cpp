#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
 
        int flag = 0;
        long long i = 0;
 
  
        while (i < n) {
            long long j = i + 1;
            while (j < n) {
                if ((v[j] % v[i]) % 2 == 0) {
                    cout << v[i] << " " << v[j] << endl;
                    flag = 1;
                    break;
                }
                j++;
            }
            if (flag) break;
            i++;
        }
 
        if (!flag) cout << -1 << endl;
    }
    return 0;
}
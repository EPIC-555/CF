#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> v(n);
 
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
 
        int sum = 0;
 
        for (int i = 0; i < n; i++) {
            sum += v[i];
        }
 
        vector<int> freq(1001, 0);
 
        for (int i = 0; i < n; i++) {
            freq[v[i]]++;
        }
 
        int mxFreq = 0;
        int mxValue = 0;
 
        for (int i = 1; i <= 1000; i++) {
            if (freq[i] > mxFreq) {
                mxFreq = freq[i];
                mxValue = i;
            }
        }
 
        int other = n - mxFreq;
 
        if (mxFreq <= other + 2) {
            cout << sum << '
';
        } else {
            int damageOfOtherCards = sum - mxFreq * mxValue;
 
            int usableMaxCards = other + 2;
 
            cout << damageOfOtherCards
                 + usableMaxCards * mxValue << '
';
        }
    }
 
    return 0;
}
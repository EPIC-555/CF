#include <bits/stdc++.h>
using namespace std;
 
static const int MAXN = 5000;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
 
        vector<int> A(n), B(n), C(n);
        for (int &x : A) cin >> x;
        for (int &x : B) cin >> x;
        for (int &x : C) cin >> x;
 
        vector<int> goodAB(n, 1), goodBC(n, 1);
 
        
        for (int x = 0; x < n; x++) {
            for (int t = 0; t < n; t++) {
                if (A[t] >= B[(t + x) % n]) {
                    goodAB[x] = 0;
                    break;
                }
            }
        }
 
        
        for (int y = 0; y < n; y++) {
            for (int t = 0; t < n; t++) {
                if (B[t] >= C[(t + y) % n]) {
                    goodBC[y] = 0;
                    break;
                }
            }
        }
 
        long long validPairs = 0;
        for (int x = 0; x < n; x++)
            for (int y = 0; y < n; y++)
                if (goodAB[x] && goodBC[y])
                    validPairs++;
 
        cout << validPairs * n << "
";
    }
    return 0;
}
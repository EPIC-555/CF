#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
        if (n == 2||n == 3) {
            cout << 1 << '
';
        } else {
            long long d=min(abs(x1 - x2), n - abs(x1 - x2));
            cout<< d+k<< '
';
        }
    }
    return 0;
}
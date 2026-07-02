#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        bool has_even = false, has_odd = false;
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) has_even = true;
            else has_odd = true;
        }
 
    
        if (has_even && has_odd) {
            sort(arr, arr + n);
        }
 
      \
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "
";
    }
    return 0;
}
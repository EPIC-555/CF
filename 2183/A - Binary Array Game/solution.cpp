#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[100];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (a[0] == 1 || a[n-1] == 1) {
            cout << "Alice
";
        } else {
            cout << "Bob
";
        }
    }
    return 0;
}
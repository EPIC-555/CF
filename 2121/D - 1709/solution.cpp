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
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        vector<pair<int, int>> operations;
        
        // Step 1: Use operation 3 to ensure that for each position,
        // the smaller element is in a and larger in b
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                swap(a[i], b[i]);
                operations.push_back({3, i+1});
            }
        }
        
        // Step 2: Sort a with adjacent swaps
        // Bubble sort: in each pass, move the largest to the end
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (a[j] > a[j+1]) {
                    swap(a[j], a[j+1]);
                    operations.push_back({1, j+1});
                }
            }
        }
        
        // Step 3: Sort b with adjacent swaps
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (b[j] > b[j+1]) {
                    swap(b[j], b[j+1]);
                    operations.push_back({2, j+1});
                }
            }
        }
        
        // Step 4: Final adjustment - ensure a[i] < b[i] for all i
        // This might require swapping some pairs and re-sorting
        for (int i = 0; i < n; i++) {
            if (a[i] >= b[i]) {
                // We need to swap a[i] and b[i]
                swap(a[i], b[i]);
                operations.push_back({3, i+1});
                
                // Now a[i] might be out of order in a
                // Bubble it to the correct position in a
                for (int j = i; j > 0; j--) {
                    if (a[j] < a[j-1]) {
                        swap(a[j], a[j-1]);
                        operations.push_back({1, j});
                    } else {
                        break;
                    }
                }
                
                // b[i] might be out of order in b
                // Bubble it to the correct position in b
                for (int j = i; j > 0; j--) {
                    if (b[j] < b[j-1]) {
                        swap(b[j], b[j-1]);
                        operations.push_back({2, j});
                    } else {
                        break;
                    }
                }
            }
        }
        
        // Output
        cout << operations.size() << "
";
        for (auto& op : operations) {
            cout << op.first << " " << op.second << "
";
        }
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        if (n == 1) {
            printf("1
");
        } else if (n == 2) {
            printf("-1
");
        } else {
            vector<long long> a = {1, 2, 3};
            long long sum = 6;
            while ((long long)a.size() < n) {
                a.push_back(sum);
                sum *= 2;
            }
            for (size_t i = 0;i<a.size(); i++) {
                printf("%lld%c", a[i], (i + 1 == a.size()) ? '
' : ' ');
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        static char a[200005], b[200005];
        scanf("%s", a);
        scanf("%s", b);
 
        long long ans = 0;
        bool possible = true;
 
        for(int parity = 0; parity < 2 && possible; parity++){
            vector<int> pa, pb;
            int rank = 0;
            for(int i = parity; i < n; i += 2){
                rank++;
                if(a[i]=='1') pa.push_back(rank);
            }
            rank = 0;
            for(int i = parity; i < n; i += 2){
                rank++;
                if(b[i]=='1') pb.push_back(rank);
            }
            if(pa.size() != pb.size()){
                possible = false;
                break;
            }
            for(size_t k = 0; k < pa.size(); k++)
                ans += abs(pa[k] - pb[k]);
        }
 
        printf("%lld
", possible ? ans : -1LL);
    }
}
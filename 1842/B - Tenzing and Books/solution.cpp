#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
#define int long long
 
#define endl '
'
 
#define vt vector<int>
 
// for(int i=0; i<n; i++)
 
 
 
void sudip0986() {
 
        int n;
 
        long long x;
 
        cin >> n >> x;
 
 
 
        vector<long long> a(n), b(n), c(n);
 
        for (int i = 0; i < n; i++) cin >> a[i];
 
        for (int i = 0; i < n; i++) cin >> b[i];
 
        for (int i = 0; i < n; i++) cin >> c[i];
 
 
 
        int p=0;
 
        for (int i = 0; i < n; i++){
 
 
 
            
 
 
 
            if((a[i]|x)==x){
 
                p|=a[i];
 
                //cout<<p<<endl;
 
            }
 
            else break;
 
        }
 
        for (int i = 0; i < n; i++)
 
       {
 
        
 
         if((b[i]|x)==x ){
 
                p|=b[i];
 
                  //cout<<p<<endl;
 
            }
 
            else break;
 
       }
 
        for (int i = 0; i < n; i++){
 
          
 
            if((c[i]|x)==x){
 
                p|=c[i];
 
                 // cout<<p<<endl;
 
            }
 
            else break;
 
        }
 
 
 
        if(p==x) cout<<"YES
";
 
        else cout<<"NO
";
 
}
 
 
 
int32_t main() {
 
    ios_base::sync_with_stdio(false);
 
    cin.tie(NULL);
 
 
 
    int t;
 
    cin >> t;
 
    while(t--) sudip0986();
 
 
 
    return 0;
 
}
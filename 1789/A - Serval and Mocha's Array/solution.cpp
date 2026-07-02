#include <bits/stdc++.h>
using namespace std;
 
int _gcd(int a,int b){
    if(b==0) return a;
    return _gcd(b,a%b);
}
 
void solve(){
    int n;
    cin >> n;
 
    vector<int> v(n);
 
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
 
    bool ok = false;
 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
 
            if(_gcd(v[i],v[j])<=2){
                ok = true;
            }
 
        }
    }
 
    if(ok) cout << "Yes
";
    else cout << "No
";
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        solve();
    }
}
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long> v(n);
        for(long long &x : v) cin>>x;
 
        map<long long,long long> cnt;
 
        for(long long x : v){
            cnt[x]++;             // frequency cnt[x]
        }
 
        long long ans = 0;
 
        for(auto &p : cnt){
            long long value = p.first;
            long long freq = p.second;
 
            if(freq >= value){
                ans += (freq - value);
            }
            else{
                ans += freq;
            }
        }
 
        cout << ans << "
";
    }
}
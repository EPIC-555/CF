#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n,x;
        cin >> n;
        vector<long long>v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        cin>>x;
        int a=*(max_element(v.begin(),v.end()));
        int b=*(min_element(v.begin(),v.end()));
        if(x<=a && x>=b) cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
 
 
    }
    return 0;
}
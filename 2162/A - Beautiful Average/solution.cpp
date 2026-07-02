#include<bits/stdc++.h>
using namespace std;
int main(){
     long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<arr[n-1]<<'
';
    }
       
 return 0;
 
 
}
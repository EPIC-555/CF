#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        if(arr[n-1]==-1){
            if(arr[0]==-1) arr[n-1]=arr[0]=0;
            else arr[n-1]=arr[0];
        }
        else if(arr[0]==-1){
            if(arr[n-1]==-1) arr[0]=arr[n-1]=0;
            else arr[0]=arr[n-1];
        }
        cout<<abs(arr[n-1]-arr[0])<<'
';
        for(int i=0;i<n;i++){
            cout<<(arr[i]==-1?0:arr[i])<<" ";
            
        }
 
cout<<'
';
    }
    
 
}
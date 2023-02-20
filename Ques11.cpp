#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mp;
    int ans;
    for(int i=0;i<n;i++){
        if (mp[arr[i]]==0){
            mp[arr[i]]=1;
        }
        else {
        ans=arr[i];
        break;
        }
    }
    cout<<ans;
    return 0;
}
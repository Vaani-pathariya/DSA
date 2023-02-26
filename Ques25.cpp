#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for (auto it:mp){
        if (it.second >n/k)
        cout<<it.first<<" ";
    }
    return 0;
}
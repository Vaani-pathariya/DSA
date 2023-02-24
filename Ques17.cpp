#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min_=INT_MAX;
    int profit=0;
    for(int i=0;i<n-1;i++){
        min_=min(arr[i],min_);
        profit=max(profit,arr[i+1]-min_);
    }
    cout<<profit;
    return 0;
}
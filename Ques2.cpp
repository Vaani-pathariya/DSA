#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of the array";
    cin>>n;
    int arr[n];
    int max_=INT_MIN;
    int min_=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        max_=max(max_,arr[i]);
        min_=min(min_,arr[i]);
    }
    cout<<max_<<" "<<min_;
    return 0;
}
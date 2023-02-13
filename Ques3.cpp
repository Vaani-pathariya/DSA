#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the value of k";
    cin>>k;
    sort (arr,arr+n);
    cout<<arr[k-1];
    return 0;
}
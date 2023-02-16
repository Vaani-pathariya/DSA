#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    cout<<"enter the elements of the array";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int k;
    cin>>k;
    sort (array,array+n);
    int ans=array[n-1]-array[0];
    int current_min=array[0];
    int current_max=array[n-1];
    for(int i=1;i<n;i++){
        current_min=min(array[0]+k,array[i]-k);
        current_max=max(array[i-1]+k,array[n-1]-k);
        ans=min(current_max-current_min,ans);
    }
    cout<<ans;
    return 0;
}
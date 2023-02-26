#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort (arr,arr+n);
    int count =0;
    int till_here=0;
    for (int i=0;i<n-1;i++){
        if (arr[i+1]==arr[i]+1)
        {
            till_here++;
            count=max(count,till_here);
        }
        else {
            till_here=0;
        }

    }
    cout<<count+1;
return 0;
}
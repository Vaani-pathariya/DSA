#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_sum=INT_MIN;
    int max_for_now=0;
    for(int i=0;i<n;i++){
        max_for_now+=arr[i];
        if (max_for_now>max_sum){
            max_sum=max_for_now;
        }
        if (max_for_now<0)
        max_for_now=0;
    }
    cout<<max_sum;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int to_swap=n;
    for(int i=0;i<n-1;i++){
        if (arr[i]<arr[i+1]){
            to_swap=i;
        }
    }
    if (to_swap==n){
        sort(arr,arr+n);
    }
    else {
        int min_=INT_MAX;
        int index=0;
        for(int i=to_swap+1;i<n;i++){
            if (arr[i]<min_){
                min_=arr[i];
                index=i;
            }
        }
        int temp=arr[to_swap];
        arr[to_swap]=arr[index];
        arr[index]=temp;
        sort(arr+to_swap+1,arr+n);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
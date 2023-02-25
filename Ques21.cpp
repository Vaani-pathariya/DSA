#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //o(n) approach :
    map<int,int>sum_till_now;
    int pre[n+1];
    pre[0]=0;
    for (int i=0;i<n;i++){
        pre[i+1]=pre[i]+arr[i];
    }
    for(int i=0;i<=n;i++){
        if (sum_till_now[pre[i]]>0){
            cout<<"yes";
            break;
        }
        else {
            sum_till_now[pre[i]]=1;
        }
    }
    return 0;
}
//the function will not print anything if the array has no such subarray
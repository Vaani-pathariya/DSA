#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int last=array[n-1];
    for(int i=n-2;i>=0;i--){
        array[i+1]=array[i];
    }
    array[0]=last;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
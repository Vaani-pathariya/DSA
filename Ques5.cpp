#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int n;
    cout<<"enter the length of the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int first=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){}
        else {
            swap(arr[i],arr[first]);
            first++;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
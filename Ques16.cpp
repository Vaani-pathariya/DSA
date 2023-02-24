#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0;
    int lowest=0;
    while (lowest<n){
        if (*min_element(arr+lowest,arr+n)==arr[lowest]){
            lowest++;
        }
        else{
            swap(arr[lowest],*min_element(arr+lowest,arr+n));
            lowest++;
            count++;
        }
    }
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<"\n";
    cout<<count;
    return 0;
}
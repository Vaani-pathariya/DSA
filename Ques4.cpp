#include<bits/stdc++.h>
using namespace std;
void swap(int *a ,int*b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int first=0;
    int last=n-1;
    int i=0;
    while (i<=last)
    {
        if(arr[i]==0){
            swap(&arr[i],&arr[first]);
            i++;
            first++;
        }
        else if (arr[i]==1)
        i++;
        else {
            swap(&arr[i],&arr[last]);
            last--;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
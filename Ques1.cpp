#include<bits/stdc++.h>
using namespace std;
void swap(int *a , int *b){
    int t=*a;
    *a=*b;
    *b=t;
};
int main(){
    int n;
    cout<<"enter the length of the array";
    cin>>n;
    int array1[n];
    for(int i=0;i<n;i++){
        cin>>array1[i];
    }
    for(int i=0;i<=(n-1)/2;i++){
        swap(&array1[i],&array1[n-1-i]);
    }
    for(int i=0;i<n;i++){
        cout<<array1[i]<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int first1=0,first2=0;
    while (first1<n1)
    {
        if (arr1[first1]<arr2[first2]){
            first1++;
        }
        else if (arr1[first1]>arr2[first2]){
            int temp=arr1[first1];
            arr1[first1]=arr2[first2];
            arr2[first2]=temp;
            sort (arr2,arr2+n2);
        }
    }
    for(int i=0;i<n1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n2;i++){
        cout<<arr2[i]<<" ";
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int n3;
    cin>>n3;
    int arr1[n1];
    int arr2[n2];
    int arr3[n3];
    for (int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for (int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    for (int i=0;i<n3;i++){
        cin>>arr3[i];
    }
    int iter1=0,iter2=0,iter3=0;
    while (iter1<n1 && iter2<n2 && iter3<n3)
    {
        if (arr1[iter1]==arr2[iter2] && arr2[iter2]==arr3[iter3]){
            cout<<arr1[iter1]<<" ";
            iter1++;
            iter2++;
            iter3++;
        }
        else if (min(min(arr1[iter1],arr2[iter2]),arr3[iter3])==arr1[iter1]){
            iter1++;
        }
        else if (min(min(arr1[iter1],arr2[iter2]),arr3[iter3])==arr2[iter2]){
            iter2++;
        }
        else {
            iter3++;
        }
    }
    return 0;
}
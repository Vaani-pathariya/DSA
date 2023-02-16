#include<bits/stdc++.h>
using namespace std;
void union_(int n1,int n2,int arr1[],int arr2[]){
    int union__[n1+n2];
    int first1=0,first2=0;
    int i=0;
    while (first1<n1 && first2<n2)  
    {
        if (arr1[first1]<arr2[first2]){
            union__[i]=arr1[first1];
            i++;
            first1++;
        }
        else if (arr1[first1]>arr2[first2]){
            union__[i]=arr2[first2];
            i++;
            first2++;
        }
        else {
            union__[i]=arr1[first1];
            i++;
            first1++;
            first2++;
        }
    }
    while (first1<n1){
        union__[i]=arr1[first1];
        i++;
        first1++;
    }
    while (first2<n2)
    {
        union__[i]=arr2[first2];
        i++;
        first2++;
    }
    for(int j=0;j<i;j++){
        cout<<union__[j]<<" ";
    }
}
void intersection (int n1,int n2,int arr1[],int arr2[]){
    int intersectio[n1+n2];
    int first1=0,first2=0;
    int i=0;
    while (first1<n1 && first2<n2)  
    {
        if (arr1[first1]<arr2[first2]){
            first1++;
        }
        else if (arr1[first1]>arr2[first2]){
            first2++;
        }
        else {
            intersectio[i]=arr1[first1];
            i++;
            first1++;
            first2++;
        }
    }
    cout<<"\n";
    for(int j=0;j<i;j++){
        
        cout<<intersectio[j]<<" ";
    }
}
int main(){
    int n1;
    cout<<"enter the length of the first array";
    cin>>n1;
    int n2;
    cout<<"enter the length of the second array";
    cin>>n2;
    int array1[n1];
    int array2[n2];
    cout<<"enter the elements of the first array";
    for(int i=0;i<n1;i++){
        cin>>array1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>array2[i];
    }
    union_(n1,n2,array1,array2);
    intersection(n1,n2,array1,array2);
    return 0;
}
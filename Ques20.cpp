#include<bits/stdc++.h>
using namespace std;
void rotation (int arr[],int start,int last ){
    int temp=arr[last];
    for(int i=last-1;i>=start;i--){
        arr[i+1]=arr[i];
    }
    arr[start]=temp;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if (i%2==0){
            if (arr[i]<0){}
            else {
                int start =i;
                int last=n;
                for (int j=i;j<n;j++){
                    if (arr[j]<0){
                        last=j;
                        break;
                    }
                }
                if (last==n){}
                else {
                    rotation(arr,start ,last);
                }
            }
        }
        else {
            if (arr[i]>0){}
            else {
                int start =i;
                int last=n;
                for (int j=i;j<n;j++){
                    if (arr[j]>0){
                        last=j;
                        break;
                    }
                }
                if (last==n){}
                else {
                    rotation(arr,start ,last);
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}
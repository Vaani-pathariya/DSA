#include<bits/stdc++.h>
using namespace std;
//kadanes's algorithm
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int max_sum=INT_MIN,max_sum_tillnow=0;
    for(int i=0;i<n;i++){
        max_sum_tillnow+=array[i];
        if(max_sum_tillnow>max_sum){
            max_sum=max_sum_tillnow;
        }
        if (max_sum_tillnow<0)
        max_sum_tillnow=0;
    }
    cout<<max_sum;
    return 0;
}
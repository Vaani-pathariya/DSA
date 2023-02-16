#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int iter=0;
    int count=0;
    while (iter<n-1)
    {
        iter+=array[iter];
        count++;
    }
    cout<<count;
    return 0;
}
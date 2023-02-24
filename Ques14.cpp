#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <vector<int>> merge;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int i=0;i<2;i++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        merge.push_back(temp);
    }
    int iter =0;
    sort (merge.begin(),merge.end());
    while (iter<n-1)
    {
        if (merge[iter][1]>=merge[iter+1][0]){
            merge[iter][1]=max(merge[iter+1][1],merge[iter][1]);
            merge.erase(merge.begin()+iter+1);
    }
    else {
        iter++;
    }
    return 0;
}
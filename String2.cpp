#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int ans=1;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n/2;i++){
        if (s[i]==s[n-1-i]){}
        else {
            ans=0;
            break;
        }
    }
    cout<<ans;
    return 0;
}
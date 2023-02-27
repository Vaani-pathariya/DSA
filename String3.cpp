#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    map <char,int> mp; 
    for (int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    for(auto it:mp){
        if (it.second>1){
            cout<<it.first<<", count = "<<it.second<<"\n";
        }
    }
    return 0;
}
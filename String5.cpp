#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    map<char ,int >mp;
    for(int i=0;i<s1.length();i++){
        mp[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        mp[s2[i]]++;
    }
    string s3;
    cin>>s3;
    map<char,int> mp2;
    for(int i=0;i<s3.length();i++){
        mp2[s3[i]]++;
    }
    bool flag=true;
    if (mp.size()==mp2.size()){
        map<char,int> ::iterator it2=mp2.begin();
        for (auto it:mp){
            if (it.first ==it2->first && it.second==it2->second){
                it2++;
            }
            else {
                flag=false ;
                break;
            }
        }
        if (flag){
            cout<<"yes";
        }
        else {
            cout<<"no";
        }
    }
    else {
        cout<<"no";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int first =0;
    while (first<s2.length()){
        if (s2[first]==s1[0])
        break;
        else
        first++;
    }
    int count =1;
    int iter =0;
    while (iter<s1.length())
    {
        if (s1[iter]==s2[first]){
            iter++;
            first++;
            if (first==s2.length()){
                first=0;
            }
        }
        else{
            count=0;
            break;
        }
    }
    cout<<count;
    return 0;
}
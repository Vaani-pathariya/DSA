//writing 3 approaches 
#include<bits/stdc++.h>
using namespace std ;
bool divisorGame(int n){ 
    return n%2==0;
}
int main(){
    int n;
    cin>>n;
    cout<<divisorGame(n);
    return 0;
}
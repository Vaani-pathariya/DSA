int ans=0;
    vector<int>sums;
    sums.assign(n,1);
    for(int i=n-2;i>=0;i--){
        int b=0;
        for(int j=i+1;j<n;j++){
            if (arr[i]-arr[j]==1 || arr[i]-arr[j]==-1){
                b=max(b,sums[j]);
            }
        }
        sums[i]+=b;
        ans=max(ans,sums[i]);
    }
    return ans;
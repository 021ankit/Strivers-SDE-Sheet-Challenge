#include <bits/stdc++.h> 
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<bool>>dp(n,vector<bool>(k+1,false));
    if(arr[0]<=k)
     dp[0][arr[0]]=1;
    for(int i=0; i<n; i++)
     dp[i][0]=1;
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<=k; j++)
        {
            bool nottake=dp[i-1][j];
            bool take=false;
            if(arr[i]<=j)
             take=dp[i-1][j-arr[i]];
            dp[i][j]=take || nottake;
        }
    }
    return dp[n-1][k];
}

#include <bits/stdc++.h> 
int solve(int i,int j,vector<int>&arr,vector<vector<int>>&dp)
{
    if(i==j)    return 0;
    if(dp[i][j]!=-1)    return dp[i][j];
    int ans=INT_MAX;
    for(int k=i; k<j; k++)
    {
        int steps= solve(i,k,arr,dp)+solve(k+1,j,arr,dp)+ arr[i-1]*arr[k]*arr[j];
        if(ans>steps)
         ans=steps;
    }
    return dp[i][j]= ans;
}
int matrixMultiplication(vector<int> &arr, int N)
{
    vector<vector<int>>dp(N,vector<int>(N,-1));
    return solve(1,N-1,arr,dp);
}

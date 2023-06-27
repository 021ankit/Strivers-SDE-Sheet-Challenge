#include <bits/stdc++.h>
long solve(int i,int *coins,int value,vector<vector<long>>&dp)
{
    if(i==0 || value==0)
    return value%coins[0]==0;
    if(dp[i][value]!=-1)    return dp[i][value];
    long nottake=solve(i-1,coins,value,dp);
    long take=0;
    if(coins[i]<=value)
    {
        take=solve(i,coins,value-coins[i],dp);
    }
    return dp[i][value]= take+nottake;
}
long countWaysToMakeChange(int *denominations, int n, int value)
{
    vector<vector<long>>dp(n,vector<long>(value+1,-1));
    return solve(n-1,denominations,value,dp);
    
}

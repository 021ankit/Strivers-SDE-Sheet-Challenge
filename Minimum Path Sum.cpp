#include <bits/stdc++.h> 
int solve(int i,int j,int n,int m,vector<vector<int>> &grid,vector<vector<int>> &dp)
{
    if(i==n-1 && j==m-1)    return grid[i][j];
    if(i<0 || j<0 || i>=n || j>=m)  return 1e8;
    if(dp[i][j]!=-1)    return dp[i][j];
    int right=solve(i,j+1,n,m,grid,dp);
    int bottom=solve(i+1,j,n,m,grid,dp);
    return dp[i][j]= grid[i][j]+min(right,bottom);
}
int minSumPath(vector<vector<int>> &grid) {
    int n=grid.size(),m=grid[0].size();
    vector<vector<int>>dp(n,vector<int>(m,-1));
    return solve(0,0,n,m,grid,dp);
}

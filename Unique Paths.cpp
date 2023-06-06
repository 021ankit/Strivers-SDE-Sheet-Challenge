#include <bits/stdc++.h> 
int dfs(int i,int j,int m,int n,vector<vector<int>>&dp)
{
	if(i==m && j==n)
	{
		return 1;
	}
	if(i>m || j>n)	return 0;
	if(dp[i][j]!=-1)	return dp[i][j];
    int l=dfs(i+1,j,m,n,dp);
	int r=dfs(i,j+1,m,n,dp);
	return dp[i][j]=l+r;
}
int uniquePaths(int m, int n) {
	int cnt=0;
	vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
    return dfs(1,1,m,n,dp);

	
}

#include <bits/stdc++.h>
vector<vector<int>>dp;
int solve(string &s,string &t,int i,int j)
{
	if(i<0 || j<0)	return 0;
	if(dp[i][j]!=-1)	return dp[i][j];
	if(s[i]==t[j])
	return dp[i][j]= 1+solve(s,t,i-1,j-1);
	else
	return dp[i][j]= max(solve(s,t,i,j-1),solve(s,t,i-1,j));
}
int lcs(string s, string t)
{
	int n=s.length(),m=t.length();
	dp.resize(n,vector<int>(m,-1));
	return solve(s,t,n-1,m-1);
}

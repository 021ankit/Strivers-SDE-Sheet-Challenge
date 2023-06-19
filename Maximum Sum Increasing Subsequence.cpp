#include <bits/stdc++.h>

int solve(int i,int prev,vector<int>&rack,vector<vector<int>>&dp)
{
	if(i==rack.size())	return 0;
	if(dp[i][prev+1]!=-1)	return dp[i][prev+1];
	int nottake=solve(i+1,prev,rack,dp);
	int take=0;
	if(prev==-1 || rack[i]>rack[prev])
	 take=rack[i]+solve(i+1,i,rack,dp);
	return dp[i][prev+1]= max(take,nottake);
}
int maxIncreasingDumbbellsSum(vector<int> &rack, int n)
{
	//int m=*max_element(rack.begin(),rack.end());
	vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
	 return solve(0,-1,rack,dp);
}

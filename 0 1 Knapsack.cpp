int solve(int i,int w,vector<int>&values,vector<int>&weights,vector<vector<int>>&dp)
{
	if(i==0)
	{
		if(weights[0]<=w)	return values[0];
		return 0;
	}
	if(dp[i][w]!=-1)	return dp[i][w];
	int nottake=solve(i-1,w,values,weights,dp);
	int take=0;
	if(weights[i]<=w)
	 take=values[i]+solve(i-1,w-weights[i],values,weights,dp);
	return dp[i][w]= max(take,nottake);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	vector<vector<int>>dp(n,vector<int>(w+1,-1));
	return solve(n-1,w,values,weights,dp);
}

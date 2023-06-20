int solve(int i,int len,vector<int>&price,vector<vector<int>>&dp)
{
	if(i==0)
	{
		return len*price[0];
	}
	if(dp[i][len]!=-1)	return dp[i][len];
	int notcut=solve(i-1,len,price,dp);
	int cut=0;
	if((i+1)<=len)
	 cut=price[i]+solve(i,len-(i+1),price,dp);
	return dp[i][len]= max(cut,notcut);
}
int cutRod(vector<int> &price, int n)
{
   vector<vector<int>>dp(n,vector<int>(n+1,-1));
   return solve(n-1,n,price,dp);
}

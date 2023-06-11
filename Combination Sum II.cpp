#include <bits/stdc++.h>
void solve(int ind,int n,int tar,vector<int>&arr,vector<int>&temp,vector<vector<int>>&res)
{
	if(tar==0)
	{
		res.push_back(temp);
		return;
	}
	for(int i=ind; i<n; i++)
	{
		if(i>ind && arr[i]==arr[i-1])	continue;
		if(arr[i]<=tar)
		{
			temp.push_back(arr[i]);
			solve(i+1,n,tar-arr[i],arr,temp,res);
			temp.pop_back();
		}
	}
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	vector<vector<int>>res;
	sort(arr.begin(),arr.end());
	vector<int>temp;
	solve(0,n,target,arr,temp,res);
	return res;
}

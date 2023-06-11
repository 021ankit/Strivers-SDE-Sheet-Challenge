#include <bits/stdc++.h> 
void solve(int i,int sum,int n,vector<int>&nums,vector<int>&res)
{
    if(i==n)
     {
         res.push_back(sum);    return;
     }
         solve(i+1,sum,n,nums,res);
         solve(i+1,sum+nums[i],n,nums,res);
}
vector<int> subsetSum(vector<int> &nums)
{
      vector<int>res;
      solve(0,0,nums.size(),nums,res);
      sort(res.begin(),res.end());
      return res;
}

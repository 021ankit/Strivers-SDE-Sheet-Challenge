#include <bits/stdc++.h> 
void solve(int ind,int n,vector<int>&arr,vector<int>&temp,vector<vector<int>>&res)
{
        res.push_back(temp);
        for(int i=ind; i<n; i++)
        {
            if(i>ind && arr[i]==arr[i-1])   continue;
            temp.push_back(arr[i]);
            solve(i+1,n,arr,temp,res);
            temp.pop_back();
        }
        
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
        vector<int>temp;
        solve(0,n,arr,temp,res);
        sort(res.begin(),res.end());
        return res;
}

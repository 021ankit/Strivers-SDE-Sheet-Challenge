#include <bits/stdc++.h> 
void solve(int i,int n,vector<int>&v,vector<int>&temp,vector<vector<int>>&res)
{
    if(i==n)
    {
        res.push_back(temp);
        return;
    }
    solve(i+1,n,v,temp,res);
    temp.push_back(v[i]);
    solve(i+1,n,v,temp,res);
    temp.pop_back();
}
vector<vector<int>> pwset(vector<int>v)
{
    int n=v.size();
    vector<int>temp;
    vector<vector<int>>res;
    solve(0,n,v,temp,res);
    return res;
}

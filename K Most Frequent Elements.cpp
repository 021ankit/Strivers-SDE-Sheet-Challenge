#include <bits/stdc++.h> 
bool static cmp(pair<int,int>&p1,pair<int,int>&p2)
{
    if(p1.second==p2.second)
    return p1.first<p2.first;
    return p1.second>p2.second;
}
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    unordered_map<int,int>mp;
    vector<pair<int,int>>v;
    for(auto x:arr) mp[x]++;
    for(auto x:mp)
    {
        v.push_back({x.first,x.second});
    }
    sort(v.begin(),v.end(),cmp);
    vector<int>ans;
    for(int i=0; i<k; i++)
    ans.push_back(v[i].first);
    sort(ans.begin(),ans.end());
    return ans;
}

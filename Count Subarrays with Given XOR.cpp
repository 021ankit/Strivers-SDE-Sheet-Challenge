#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    unordered_map<int,int>mp;
    int n=arr.size();
    int t=0,ans=0;
    for(int i=0; i<n; i++)
    {
        t^=arr[i];
        if(t==x)    ans++;
        int f=x^t;
        if(mp.find(f)!=mp.end())
        {
            ans+=mp[f];
        }
        mp[t]++;
    }
    return ans;
}

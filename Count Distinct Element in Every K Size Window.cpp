#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here
    vector<int>ans;
    int n=arr.size();
    unordered_map<int,int>mp;
    for(int i=0; i<k; i++)
     mp[arr[i]]++;
    ans.push_back(mp.size());
    for(int i=k; i<n; i++)
    {
        if(mp[arr[i-k]]>1)
        {
            mp[arr[i-k]]--;
        }
        else 
        mp.erase(arr[i-k]);
        mp[arr[i]]++;
        ans.push_back(mp.size());
    }
    return ans;
}

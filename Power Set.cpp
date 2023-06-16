#include <bits/stdc++.h> 
vector<vector<int>> pwset(vector<int>v)
{
    vector<vector<int>>res;
    int n=v.size();
    for(int i=0; i<(1<<v.size()); i++)
    {
        vector<int>temp;
        for(int j=0; j<n; j++)
        {
            if((i&(1<<j))>0)
             temp.push_back(v[j]);
        }
        res.push_back(temp);
    }
    return res;
}

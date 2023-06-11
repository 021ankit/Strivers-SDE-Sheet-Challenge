// same as N meetings in a room
#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int,int>>v;
    int n=start.size();
    for(int i=0; i<n; i++)
    {
        v.push_back({start[i],finish[i]});
    }
    sort(v.begin(),v.end());
    int end=v[0].second;
    int ans=1;
    for(int i=1; i<n; i++)
    {
        if(v[i].first<end)
        {
            end=min(end,v[i].second);
        }
        else
        {
            ans++;
            end=v[i].second;
        }
    }
    return ans;
}

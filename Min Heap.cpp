#include <bits/stdc++.h> 
vector<int> minHeap(int n, vector<vector<int>>& q) {
    vector<int>ans;
    priority_queue<int, vector<int>, greater<int>>pq;
    for(auto x:q)
    {
        if(x[0]==0)
        pq.push(x[1]);
        else
        {
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    return ans;
}

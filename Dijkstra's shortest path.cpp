#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    vector<int>dist(vertices,INT_MAX);
    vector<pair<int,int>>adj[vertices+1];
    for(auto x:vec)
    {
        int u=x[0],v=x[1],w=x[2];
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >q;
    q.push({0,source});
    dist[source]=0;
    while(!q.empty())
    {
        int node=q.top().second;
        q.pop();
        for(auto x:adj[node])
        {
            int v=x.first;
            int wt=x.second;
            if(dist[v]>dist[node]+wt)
            {
                dist[v]=dist[node]+wt;
                q.push({dist[v],v});
            }
        }
    }
    return dist;
}

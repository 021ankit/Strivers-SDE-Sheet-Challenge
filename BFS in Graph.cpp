#include <bits/stdc++.h> 
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    vector<int>adj[vertex];
    for(auto x:edges)
    {
        adj[x.first].push_back(x.second);
        adj[x.second].push_back(x.first);
    }
    for(int i=0; i<vertex; i++)
     sort(adj[i].begin(),adj[i].end());
    vector<int>ans;
    vector<bool>vis(vertex,0);
    for(int i=0; i<vertex; i++)
    {
        if(vis[i])  continue;
        queue<int>q;
        q.push(i);
        vis[i]=1;
        while(!q.empty())
        {
            int t=q.front();    q.pop();
            ans.push_back(t);
            for(auto x:adj[t])
            {
            if (!vis[x]) {
                q.push(x);
                vis[x] = 1;
            }
            }
        }
    }
   // for(int i=0; i<vertex; i++) if(!vis[i]) ans.push_back(i);
    return ans;
}

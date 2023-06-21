#include <bits/stdc++.h> 
void dfs(int node,vector<int>adj[],vector<bool>&vis,vector<int>&ans)
{
    vis[node]=1;
    for(auto x:adj[node])
    {
        if(!vis[x])
         dfs(x,adj,vis,ans);
    }
    ans.push_back(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
      vector<int>adj[v];
      for(int i=0; i<e; i++)
      {
          adj[edges[i][0]].push_back(edges[i][1]);
      }
      vector<bool>vis(v,0);
      vector<int>ans;
      for(int i=0; i<v; i++)
      {
          if(!vis[i])
           dfs(i,adj,vis,ans);
      }
      reverse(ans.begin(),ans.end());
      return ans;
}

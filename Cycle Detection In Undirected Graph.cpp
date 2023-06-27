bool dfs(int node,int parent,vector<int>adj[],vector<bool>&vis)
{
    vis[node]=1;
    for(auto x:adj[node])
    {
        if(!vis[x])
        {
            if(dfs(x,node,adj,vis))
            return true;
        }
        else if(x!=parent)
        return true;
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
      vector<int>adj[n+1];
      for(auto x:edges)
      {
          adj[x[0]].push_back(x[1]);
          adj[x[1]].push_back(x[0]);
      }
      vector<bool>vis(n+1,0);
      for(int i=1; i<=n; i++)
      {
          if(!vis[i])
          {
              if(dfs(i,-1,adj,vis))
              return "Yes";
          }
      }
      return "No";
}

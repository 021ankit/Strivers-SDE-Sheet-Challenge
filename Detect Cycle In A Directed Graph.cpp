bool dfs(int i,vector<int>adj[],vector<bool>&vis,vector<bool>&path)
{
  vis[i]=1;
  path[i]=1;
  for(auto x:adj[i])
  {
    if(!vis[x])
    {
      if(dfs(x,adj,vis,path))
      return true;
    }
    else if(path[x])
    return  true;
  }
  path[i]=0;
  return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  
         vector<int>adj[n+1];
         for(auto x:edges)
         {
           adj[x.first].push_back(x.second);
           //adj[x.second].push_back(x.first);
         }
         vector<bool>vis(n+1,0);
         vector<bool>path(n+1,0);
         for(int i=1; i<=n; i++)
         {
           if(!vis[i])
           {
             if(dfs(i,adj,vis,path))
              return  true;
           }
         }
         return false;
}

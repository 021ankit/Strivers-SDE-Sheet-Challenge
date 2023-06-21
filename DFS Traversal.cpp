void dfs(int node,vector<int>adj[],vector<bool>&vis,vector<int>&v)
{
    vis[node]=1;
    v.push_back(node);
    for(auto nbr:adj[node])
    {
        if(!vis[nbr])
         dfs(nbr,adj,vis,v);
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    vector<int>adj[V];
    for(int i=0; i<E; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    vector<bool>vis(V,0);
    vector<vector<int>>ans;
    for(int i=0; i<V; i++)
    {
      if (!vis[i]) {
        vector<int>v;
        dfs(i, adj, vis,v);
        ans.push_back(v);
      }
    }
    return ans;
}

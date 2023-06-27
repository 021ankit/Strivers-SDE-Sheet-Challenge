bool dfs(int i,int n,vector<vector<int>>&adj,int col,vector<int>&color)
{
	color[i]=col;
	for(int j=0; j<n; j++)
	{
		if(adj[i][j]==1 && i!=j)
		{
			if(color[j]==-1)
			{
				if(dfs(j,n,adj,!col,color))
				return true;
			}
			else if(color[j]==col)
			return true;
		}
	}
	return false;
}
bool isGraphBirpatite(vector<vector<int>> &edges) {
	int n=edges.size();
	vector<int>color(n,-1);
	for(int i=0; i<n; i++)
	{
		if(color[i]==-1 && dfs(i,n,edges,0,color))
		return false;
	}
	return true;
}

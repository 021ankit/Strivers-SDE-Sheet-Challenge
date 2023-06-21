vector<int>dx,dy;
void dfs(int i,int j,int** arr,vector<vector<bool>>&vis)
{
   vis[i][j]=1;
   for(int k=0; k<8; k++)
   {
      int r=i+dx[k], c=j+dy[k];
      if(r>=0 && r<vis.size() && c>=0 && c<vis[0].size() && !vis[r][c] && arr[i][j]==1)
      {
         dfs(r,c,arr,vis);
      }

   }
   
}
int getTotalIslands(int** arr, int n, int m)
{
   vector<vector<bool>>vis(n,vector<bool>(m,0));
   int ans=0;
   dx.resize(8);dy.resize(8);
   dx={0,0,1,-1,1,1,-1,-1};
   dy={1,-1,0,0,1,-1,1,-1};
   for(int i=0; i<n; i++)
   {
      for(int j=0; j<m; j++)
      {
         if(!vis[i][j] && arr[i][j]==1)
         {
            ans++;
            dfs(i,j,arr,vis);
         }
      }
   }
   return ans;
}

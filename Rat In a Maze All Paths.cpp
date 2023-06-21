#include <bits/stdc++.h> 
void solve(vector<vector<int>>&maze,int i,int j,int n,vector<int>&v,vector<vector<int>>&ans)
{
    if(i<0 || j<0 || i>=n || j>=n)  return;
    if(i==n-1 && j==n-1)  
    {
      v[i*n+j]=1;
      ans.push_back(v);
      return;
    }
    if(maze[i][j]==0 || maze[i][j]==-1)   return;
    maze[i][j]=-1;
    v[n*i+j]=1;
    solve(maze,i,j-1,n,v,ans);
    solve(maze,i,j+1,n,v,ans);
    solve(maze,i-1,j,n,v,ans);
    solve(maze,i+1,j,n,v,ans);
    maze[i][j]=1;
    v[n*i+j]=0;

}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
      vector<vector<int>>ans;
      vector<int>v(n*n,0);
      solve(maze,0,0,n,v,ans);
      return ans;
      
}

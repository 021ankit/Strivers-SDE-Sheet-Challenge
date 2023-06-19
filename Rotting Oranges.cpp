#include <bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
     queue<pair<int,int>>q;
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<m; j++)
         {
             if(grid[i][j]==2)
              {
                  q.push({i,j});
                  grid[i][j]=0;
              }
         }
     }
     int ans=0;
     vector<int>dx={0,0,1,-1};
     vector<int>dy={1,-1,0,0};
     while(!q.empty())
     {
         int t=q.size();
         ans++;
         while(t--)
         {
             auto it=q.front();
             q.pop();
             for(int i=0; i<4; i++)
             {
                 int r=dx[i]+it.first, c=dy[i]+it.second;
                 if(r>=0 && r<n && c>=0 && c<m && grid[r][c]==1)
                 {
                     q.push({r,c});
                     grid[r][c]=0;
                 }
             }
         }
     }
     for(int i=0; i<n; i++)
      for(int j=0; j<m; j++)
       if(grid[i][j]==1)    return -1;
     if(ans!=0) return ans-1;
     return ans;
}#include <bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
     queue<pair<int,int>>q;
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<m; j++)
         {
             if(grid[i][j]==2)
              {
                  q.push({i,j});
                  grid[i][j]=0;
              }
         }
     }
     int ans=0;
     vector<int>dx={0,0,1,-1};
     vector<int>dy={1,-1,0,0};
     while(!q.empty())
     {
         int t=q.size();
         ans++;
         while(t--)
         {
             auto it=q.front();
             q.pop();
             for(int i=0; i<4; i++)
             {
                 int r=dx[i]+it.first, c=dy[i]+it.second;
                 if(r>=0 && r<n && c>=0 && c<m && grid[r][c]==1)
                 {
                     q.push({r,c});
                     grid[r][c]=0;
                 }
             }
         }
     }
     for(int i=0; i<n; i++)
      for(int j=0; j<m; j++)
       if(grid[i][j]==1)    return -1;
     if(ans!=0) return ans-1;
     return ans;
}

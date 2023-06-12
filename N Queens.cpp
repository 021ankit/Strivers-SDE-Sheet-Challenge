#include <bits/stdc++.h>
void solve(int col,vector<int>&board,vector<vector<int>>&ans,int n,
vector<bool>&leftrow,
vector<bool>&uppdigonal,vector<bool>&lowdiagonal)
{
    if(col==n)
    {
        ans.push_back(board);
        return;
    }
    for(int row=0; row<n; row++)
    {
        if(!leftrow[row] && !uppdigonal[n-1+col-row] && !lowdiagonal[row+col])
        {
            board[row*n+col]=1;
            leftrow[row]=1;
            uppdigonal[n-1+col-row]=1;
            lowdiagonal[row+col]=1;
            solve(col+1,board,ans,n,leftrow,uppdigonal,lowdiagonal);
            board[row*n+col]=0;
            leftrow[row]=0;
            uppdigonal[n-1+col-row]=0;
            lowdiagonal[row+col]=0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>>ans;
    vector<int>board(n*n,0);

    vector<bool>leftrow(n,0),uppdigonal(2*n-1,0),lowdiagonal(2*n-1,0);
    solve(0,board,ans,n,leftrow,uppdigonal,lowdiagonal);
    return ans;
}

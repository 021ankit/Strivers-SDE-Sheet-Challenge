#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
   // vector<vector<int>>res=mat;
    //  1 2 3    4 1 2   21 11 12
    //  4 5 6    7 5 3   31 22 13
    //  7 8 9    8 9 6   32 33 23
    int left=0,top=0,bottom=n-1,right=m-1;
    int prev=0,curr;
    while(left<right && top<bottom)
    {
        prev=mat[top][left];
        for(int i=left; i<=right; i++)
        {
            curr=mat[top][i];
            mat[top][i]=prev;
            prev=curr;
        }
         top++;
        for(int i=top; i<=bottom; i++)
        {
            curr=mat[i][right];
            mat[i][right]=prev;
            prev=curr;
        }
        right--;
        if(top<=bottom)
        {
          for (int i = right; i >= left; i--) {
             curr = mat[bottom][i];
            mat[bottom][i] = prev;
            prev = curr;
          }
          bottom--;
        }
        if(left<=right)
        {
          for (int i = bottom; i >= top; i--) {
            int curr = mat[i][left];
            mat[i][left] = prev;
            prev = curr;
          }
          left++;
          mat[top-1][left-1]=prev;
        }
    } 
}

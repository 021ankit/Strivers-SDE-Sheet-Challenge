#include <bits/stdc++.h>
vector<vector<int>>dp;
int solve(string &s1,string &s2,int i,int j)
{
    if(i<0)
    return j+1;
    if(j<0)
    return i+1;
    if(dp[i][j]!=-1)    return dp[i][j];
    if(s1[i]==s2[j])
    return dp[i][j]= solve(s1,s2,i-1,j-1);
    else
    {
        int replace=1+solve(s1,s2,i-1,j-1);
        int insert=1+solve(s1,s2,i,j-1);
        int delet=1+solve(s1,s2,i-1,j);
        return dp[i][j]= min({replace,insert,delet});
    }
}
int editDistance(string str1, string str2)
{
    int n=str1.length();
    int m=str2.length();
    dp.resize(n,vector<int>(m,-1));
    return solve(str1,str2,n-1,m-1);
}

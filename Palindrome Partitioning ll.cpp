#include <bits/stdc++.h> 
bool ispal(string s)
{
    int i=0,j=s.length()-1;
    while(i<j)
    {
        if(s[i]!=s[j])  return false;
        i++;
        j--;
    }
    return true;
}
int solve(int i,int n,string &str, vector<int>&dp)
{
    if(i==n)    return 0;
    int ans=INT_MAX;
    string word="";
    if(dp[i]!=-1)   return dp[i];
    for(int j=i; j<n; j++)
    {
        word+=str[j];
        if(ispal(word))
        {
            ans=min(ans,1+solve(j+1,n,str,dp));
        }
    }
    return dp[i]= ans;
}
int palindromePartitioning(string str) {
    vector<int>dp(str.length(),-1);
    return solve(0,str.length(),str,dp)-1;
}

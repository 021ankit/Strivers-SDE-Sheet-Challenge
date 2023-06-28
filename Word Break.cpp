#include <bits/stdc++.h> 
bool solve(int i,string &A,set<string>&st,vector<int>&dp)
    {
        int n=A.length();
        if(i==n)
        return 1;
        if(dp[i]!=-1)   return dp[i];
        string temp="";
        for(int j=i; j<n; j++)
        {
            temp+=A[j];
            if(st.find(temp)!=st.end())
            {
                if(solve(j+1,A,st,dp))
                return 1;
            }
        }
        return dp[i]= 0;
    }
bool wordBreak(vector < string > & arr, int n, string & target) {
    // Write your code here.
    set<string>st(arr.begin(),arr.end());
    vector<int>dp(target.length(),-1);
    return solve(0,target,st,dp);
}

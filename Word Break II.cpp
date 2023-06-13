#include <bits/stdc++.h> 
void solve(int ind,int n,string &s,unordered_map<string,int>&mp,string temp,
vector<string>&res)
{
    if(ind==n)
    {
        res.push_back(temp);
        return;
    }
    string word="";
    for(int i=ind; i<n; i++)
    {
        word+=s[i];
        if(mp.find(word)!=mp.end())
        {
            string t=temp;
            t+=word;
            t+=" ";
            solve(i+1,n,s,mp,t,res);
        }
    }

}
vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    vector<string>res;
    unordered_map<string,int>mp;
    for(auto x:dictionary)
     mp[x]++;
    string temp="";
    solve(0,s.length(),s,mp,temp,res);
    return res;
}

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
void solve(int ind,int n,string &s,vector<string>&temp,vector<vector<string>>&res)
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
        if(ispal(word))
        {
            temp.push_back(word);
            solve(i+1,n,s,temp,res);
            temp.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s) 
{
    vector<vector<string>>res;
    vector<string>temp;
    solve(0,s.length(),s,temp,res);
    return res;
}

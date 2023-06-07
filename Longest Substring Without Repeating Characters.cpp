#include <bits/stdc++.h> 
int uniqueSubstrings(string str)
{
   // unordered_map<char,int>mp;
   vector<int>mp(256,0);
    int cnt=0,ans=0,j=0;
    for(int i=0; i<str.length(); i++)
    {
        mp[str[i]]++;
        if(mp[str[i]]>1)
        {
            while(mp[str[i]]>1)
            {
                mp[str[j]]--;
                j++;
            }
        }
        ans=max(ans,i-j+1);
    }
    return ans;
}

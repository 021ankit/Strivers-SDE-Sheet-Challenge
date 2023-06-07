#include <bits/stdc++.h>
bool static cmp(vector<int>&p1,vector<int>&p2)
{
  if(p1[0]==p2[0])
   return p1[1]<p2[1];
  return p1[0]<p2[0];
}
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   //sort(arr.begin(),arr.end());
   vector<vector<int>>res;
   map<int,int>mp;
   for(auto x:arr)
     mp[x]++;
   for(auto x:mp)
   {
     if(mp.find(s-x.first)!=mp.end() && x.first==s-x.first)
     {
        int n= mp[x.first]-1;
        n= n*(n+1)/2;
        while(n--)
        {
          res.push_back({x.first,x.first});
        }
     }
     else if(mp.find(s-x.first)!=mp.end())
     {
        int t=x.second;
        while(t--)
        {
           vector<int>v={s-x.first,x.first};
           if(v[0]>v[1])  swap(v[0],v[1]);
           int f=mp[s-x.first];
           while(f--)
           res.push_back(v);
        }
        mp.erase(s-x.first);
     }
   }
  // sort(res.begin(),res.end(),cmp);
   return res;
}

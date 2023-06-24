#include <bits/stdc++.h> 
vector<int> merge(vector<int>&a,vector<int>&b)
{
    int n=a.size(),m=b.size(),i=0,j=0;
    vector<int>temp;
    while(i<n && j<m)
    {
        if(a[i]<=b[j])
         temp.push_back(a[i++]);
        else
         temp.push_back(b[j++]);
    }
    while(i<n)
    {
        temp.push_back(a[i++]);
    }
    while(j<m)
     temp.push_back(b[j++]);
    return temp;
}
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    for(int i=0; i<k-1; i++)
    kArrays[i+1]=merge(kArrays[i],kArrays[i+1]);
    return kArrays[k-1];
}
